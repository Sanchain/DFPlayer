//
//  DFPlayerTool.h
//  DFPlayer
//
//  Created by HDF on 2017/7/30.
//  Copyright © 2017年 HDF. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#define kWeakSelf __weak __typeof(&*self)weakSelf = self;
/**
 DFPlayer工具类
 */
@interface DFPlayerTool : NSObject

//链接
+ (NSURL *)customUrlWithUrl:(NSURL *)url;
+ (NSURL *)originalUrlWithUrl:(NSURL *)url;

//网络
+ (void)checkNetworkReachable:(void(^)(NSInteger networkStatus))block;

@end
@interface UIImage (DFImage)

//裁剪图片
- (UIImage *)imageByResizeToSize:(CGSize)size;
@end
