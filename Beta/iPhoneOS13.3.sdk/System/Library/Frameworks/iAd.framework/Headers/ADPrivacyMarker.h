/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <UIButton.h>

@class NSLayoutConstraint;

@interface ADPrivacyMarker : UIButton

{
    _Bool _isVideo;
    NSLayoutConstraint *_constraintHeight;
    NSLayoutConstraint *_constraintWidth;
}

@property (nonatomic) _Bool isVideo;
@property (retain, nonatomic) NSLayoutConstraint *constraintHeight;
@property (retain, nonatomic) NSLayoutConstraint *constraintWidth;

+ (id)localizedAdMarkerText;
+ (id)bundleForLocalizedString;
+ (id)deviceContentSize;
+ (id)dimensionsForVideoMarker;
+ (id)localizedLearnMoreText;

- (id)init;
- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (void)resetBannerMarkerForVideoMarker;
- (void)updateAdMarkerSpec;
- (void)updateBackgroundAndTintColor;
- (void)renderMarkerForBannerForCategory:(id)arg1 andLanguage:(_Bool)arg2;

@end
