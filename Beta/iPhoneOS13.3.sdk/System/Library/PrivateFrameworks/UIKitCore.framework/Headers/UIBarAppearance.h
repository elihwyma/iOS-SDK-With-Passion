/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UIBlurEffect, UIColor, UIImage, UIVibrancyEffect, _UIBarBackgroundAppearanceData;

@protocol _UIBarAppearanceChangeObserver;

@interface UIBarAppearance : NSObject <Swift>

{
    long long _idiom;
    id <_UIBarAppearanceChangeObserver> _changeObserver;
    _UIBarBackgroundAppearanceData *_backgroundData;
}

@property (weak, nonatomic, setter=_setChangeObserver:) id <_UIBarAppearanceChangeObserver> _changeObserver;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (copy, nonatomic) UIVibrancyEffect *shadowEffect;
@property (nonatomic, readonly) long long idiom;
@property (copy, nonatomic) UIBlurEffect *backgroundEffect;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) long long backgroundImageContentMode;
@property (copy, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIImage *shadowImage;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdiom:(long long)arg1;
- (void)_setupDefaults;
- (void)_completeInit;
- (void)_copyFromAppearance:(id)arg1;
- (unsigned long long)_hashInto:(unsigned long long)arg1;
- (_Bool)_checkEqualTo:(id)arg1;
- (void)_describeInto:(id)arg1;
- (id)initWithBarAppearance:(id)arg1;
- (void)_decodeFromCoder:(id)arg1;
- (id)_backgroundData;
- (void)configureWithDefaultShadow;
- (void)configureWithoutShadow;
- (id)_barTitleData;
- (id)_backButtonAppearanceData;
- (id)_plainButtonAppearanceData;
- (id)_doneButtonAppearanceData;
- (id)_stackedTabButtonAppearanceData;
- (id)_inlineTabButtonAppearanceData;
- (id)_compactInlineTabButtonAppearanceData;
- (id)_tabLayoutAppearanceData;
- (id)_backButtonAppearance;
- (id)_plainButtonAppearance;
- (id)_doneButtonAppearance;
- (void)configureWithDefaultBackground;
- (void)configureWithOpaqueBackground;
- (void)configureWithTransparentBackground;

@end
