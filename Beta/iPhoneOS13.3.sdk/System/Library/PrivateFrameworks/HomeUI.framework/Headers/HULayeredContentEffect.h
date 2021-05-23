/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class UIColor, UIVibrancyEffect;

@interface HULayeredContentEffect : NSObject

{
    UIVibrancyEffect *_vibrancyEffect;
    UIColor *_tintColor;
}

@property (retain, nonatomic) UIVibrancyEffect *vibrancyEffect;
@property (retain, nonatomic) UIColor *tintColor;

+ (id)contentWithVibrancyEffect:(id)arg1;
+ (id)contentWithTintColor:(id)arg1;

@end
