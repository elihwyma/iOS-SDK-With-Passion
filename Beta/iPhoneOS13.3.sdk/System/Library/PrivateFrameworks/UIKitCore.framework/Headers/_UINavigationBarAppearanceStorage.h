/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarAppearanceStorage.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, UIImage, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage

{
    NSDictionary *textAttributes;
    NSMutableDictionary *titleVerticalAdjustmentsForBarMetrics;
    UIImage *shadowImage;
    _Bool hidesShadow;
    long long barMetrics;
    UIImage *backIndicatorImage;
    UIImage *backIndicatorTransitionMaskImage;
    NSNumber *backIndicatorLeftMargin;
    _Bool reversesShadowOffset;
    _UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;
    _Bool _deferShadowToSearchBar;
    long long defaultBarMetrics;
    long long activeBarMetrics;
    NSString *_backdropViewGroupName;
}

@property (nonatomic, readonly) UIImage *backgroundImage;
@property (nonatomic, readonly) UIImage *miniBackgroundImage;
@property (nonatomic, readonly) UIImage *promptBackgroundImage;
@property (nonatomic, readonly) UIImage *miniPromptBackgroundImage;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (retain, nonatomic) UIImage *shadowImage;
@property (nonatomic) _Bool hidesShadow;
@property (nonatomic) long long defaultBarMetrics;
@property (nonatomic) long long activeBarMetrics;
@property (nonatomic) _Bool reversesShadowOffset;
@property (nonatomic, readonly) _UIBarButtonItemAppearanceStorage *barButtonAppearanceStorage;
@property (nonatomic, readonly) _UIBarButtonItemAppearanceStorage *_barButtonAppearanceStorage;
@property (nonatomic) _Bool deferShadowToSearchBar;
@property (retain, nonatomic) UIImage *backIndicatorImage;
@property (retain, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property (retain, nonatomic) NSNumber *backIndicatorLeftMargin;
@property (retain, nonatomic) NSString *backdropViewGroupName;

+ (long long)typicalBarPosition;

- (void)setTitleVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (double)titleVerticalAdjustmentForBarMetrics:(long long)arg1;
- (id)representativeImageForIdiom:(long long)arg1;

@end
