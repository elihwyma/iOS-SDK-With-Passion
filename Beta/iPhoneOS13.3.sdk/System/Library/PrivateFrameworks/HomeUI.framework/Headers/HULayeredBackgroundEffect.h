/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class UIBlurEffect, UIColor;

@interface HULayeredBackgroundEffect : NSObject

{
    UIBlurEffect *_blurEffect;
    UIColor *_fillColor;
}

@property (retain, nonatomic) UIBlurEffect *blurEffect;
@property (retain, nonatomic) UIColor *fillColor;

+ (id)backgroundWithFillColor:(id)arg1;
+ (id)backgroundWithBlurEffect:(id)arg1;

@end
