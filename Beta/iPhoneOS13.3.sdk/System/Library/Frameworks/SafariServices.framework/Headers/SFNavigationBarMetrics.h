/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class UIFont, UIImageSymbolConfiguration, UITraitCollection;

__attribute__((visibility("hidden")))
@interface SFNavigationBarMetrics : NSObject

{
    UITraitCollection *_traitCollectionForFontMetrics;
    double _minimumBarHeight;
    UIFont *_defaultLabelFont;
    UIFont *_defaultBoldFont;
    UIFont *_narrowEditingLabelFont;
    _Bool _narrowEditingScaleFactorNeedsUpdate;
    double _narrowEditingScaleFactor;
    double _safariBarHeight;
    double _safariViewControllerBarHeight;
    double _safariSquishHeightQuantizationOffset;
    double _safariViewControllerSquishHeightQuantizationOffset;
    double _statusBarHeight;
    UIImageSymbolConfiguration *_accessoryImageSymbolConfiguration;
    UIImageSymbolConfiguration *_squishedAccessoryImageSymbolConfiguration;
    double _accessibilityImageScale;
    double _urlOutlineCornerRadius;
    double _defaultBarHeight;
    double _urlContainerTop;
    double _urlOutlineHeight;
    double _urlLabelVerticalOffset;
    double _urlLabelAccessoryItemSquishedVerticalOffset;
    double _urlLabelAccessoryLockItemVerticalOffset;
    double _distanceFromLabelBaselineToURLOutlineBottom;
}

@property (nonatomic, readonly) double accessibilityImageScale;
@property (nonatomic, readonly) double urlOutlineCornerRadius;
@property (nonatomic, readonly) double defaultBarHeight;
@property (nonatomic, readonly) double minimumBarHeight;
@property (nonatomic, readonly) double urlContainerTop;
@property (nonatomic, readonly) double urlOutlineHeight;
@property (nonatomic, readonly) UIFont *defaultLabelFont;
@property (nonatomic, readonly) UIFont *defaultBoldFont;
@property (nonatomic, readonly) UIFont *narrowEditingLabelFont;
@property (nonatomic, readonly) double narrowEditingScaleFactor;
@property (nonatomic, readonly) double urlLabelVerticalOffset;
@property (nonatomic, readonly) double urlLabelAccessoryItemSquishedVerticalOffset;
@property (nonatomic, readonly) double urlLabelAccessoryLockItemVerticalOffset;
@property (nonatomic, readonly) double distanceFromLabelBaselineToURLOutlineBottom;
@property (nonatomic, readonly) UIImageSymbolConfiguration *accessoryImageSymbolConfiguration;
@property (nonatomic, readonly) UIImageSymbolConfiguration *squishedAccessoryImageSymbolConfiguration;

- (id)init;
- (_Bool)updateForStatusBarHeight:(double)arg1;
- (double)barHeightWithBarMetricsCategory:(long long)arg1;
- (_Bool)updateForContentSizeCategory:(id)arg1;
- (double)squishHeightQuantizationOffsetWithBarMetricsCategory:(long long)arg1;
- (void)_updateMetrics;
- (id)_contentSizeCategoryWithPreferredCategory:(id)arg1;

@end
