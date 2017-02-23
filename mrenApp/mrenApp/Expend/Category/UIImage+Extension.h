//
//  UIImage+Extension.h
//  HSMineDemo
//
//  Created by zhouen on 16/8/12.
//  Copyright © 2016年 zhouen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Extension)

/*--------------------size相关-------------------------*/
//拉伸图片
+ (UIImage *)resizedImageWithName:(NSString *)name;

//获取指定尺寸的图片
+ (UIImage*)imageWithImageSimple:(UIImage*)image scaledToSize:(CGSize)newSize;

/*--------------------size相关-------------------------*/



/*--------------------color相关-------------------------*/
+ (UIImage *)imageWithColor:(UIColor *)color;
//根据色值生成图片
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;


/*--------------------color相关-------------------------*/


/**
 *  方向调整
 */
+ (UIImage *)fixOrientation:(UIImage *)aImage;
@end
