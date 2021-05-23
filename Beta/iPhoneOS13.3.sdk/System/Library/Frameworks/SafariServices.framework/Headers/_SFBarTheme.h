/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, UIBlurEffect, UIColor;

@interface _SFBarTheme : NSObject

{
    UIColor *_preferredControlsTintColor;
    _Bool _backdropIsDark;
    _Bool _backdropIsTinted;
    unsigned long long _tintStyle;
    UIColor *_controlsTintColor;
    UIColor *_preferredBarTintColor;
    long long _overrideUserInterfaceStyle;
    UIBlurEffect *_backdropEffect;
    NSArray *_backdropAdjustmentEffects;
}

@property (nonatomic, readonly) _Bool backdropIsDark;
@property (nonatomic, readonly) _Bool backdropIsTinted;
@property (nonatomic, readonly) unsigned long long tintStyle;
@property (nonatomic, readonly) UIColor *controlsTintColor;
@property (nonatomic, readonly) UIColor *preferredBarTintColor;
@property (nonatomic, readonly) long long overrideUserInterfaceStyle;
@property (nonatomic, readonly) UIBlurEffect *backdropEffect;
@property (nonatomic, readonly) NSArray *backdropAdjustmentEffects;
@property (nonatomic, readonly) _SFBarTheme *fallbackTheme;

+ (id)themeWithBarTintStyle:(unsigned long long)arg1;
+ (id)themeWithTheme:(id)arg1;
+ (id)themeWithBarTintStyle:(unsigned long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (void)applyBackdropEffectsToView:(id)arg1;
- (id)initWithBarTintStyle:(unsigned long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3;

@end
