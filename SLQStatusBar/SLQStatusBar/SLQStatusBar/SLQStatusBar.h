//
//  SLQStatusBar.h
//  状态栏指示器
//
//  Created by Christian on 15/8/2.
//  Copyright (c) 2015年 slq. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SLQStatusBar : NSObject

/**
 *	显示
 */
+ (void)show;
/**
 *	显示信息和图标
 */
+ (void)showMessage:(NSString *)msg image:(UIImage *)image;
/**
 *	显示文字信息
 */
+ (void)showMessage:(NSString *)msg;
/**
 *	显示成功信息
 */
+ (void)showSuccess:(NSString *)msg;
/**
 *	显示失败信息
 */
+ (void)showError:(NSString *)msg;
/**
 *	显示正在加载
 */
+ (void)showLoading:(NSString *)msg;

/**
 *	隐藏
 */
+ (void)hide;
@end
