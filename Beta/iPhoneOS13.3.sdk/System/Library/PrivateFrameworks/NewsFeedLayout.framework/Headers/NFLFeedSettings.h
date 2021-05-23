/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

#import <NewsFeedLayout/Swift-Protocol.h>

@class FCHeadlineTemplate, NFLCellGeneratorManager, NFLFontCache, NSString, UIColor, UITraitCollection;

@protocol FCFeedTheming, NFLFeedLayoutSearchConfiguration;

@interface NFLFeedSettings : NSObject <Swift>

{
    _Bool _allowsExcerptsInAllCells;
    _Bool _authenticationSetup;
    _Bool _showingPrefetchedPurchase;
    FCHeadlineTemplate *_defaultHeadlineTemplate;
    NSString *_preferredContentSizeCategory;
    double _feedWidth;
    double _feedGutter;
    double _feedTopMargin;
    double _adjustedFeedWidth;
    long long _columnCount;
    unsigned long long _layoutOptions;
    double _columnWidth;
    double _horizontalMarginWidth;
    double _rowHeight;
    double _verticalMarginInRows;
    double _articleContentInset;
    double _articleSelectionCornerRadius;
    double _articleSelectionInset;
    double _scaleValue;
    NFLCellGeneratorManager *_cellGeneratorManager;
    id <NFLFeedLayoutSearchConfiguration> _defaultFeedLayoutSearchConfiguration;
    NFLFontCache *_fontCache;
    UITraitCollection *_traitCollection;
    id <FCFeedTheming> _feedTheme;
    struct CGSize _viewportSize;
}

@property (retain, nonatomic) id <FCFeedTheming> feedTheme;
@property (copy, nonatomic) id <NFLFeedLayoutSearchConfiguration> defaultFeedLayoutSearchConfiguration;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) FCHeadlineTemplate *defaultHeadlineTemplate;
@property (nonatomic, readonly) double feedWidth;
@property (nonatomic, readonly) double feedGutter;
@property (nonatomic, readonly) double feedTopMargin;
@property (nonatomic, readonly) double adjustedFeedWidth;
@property (nonatomic, readonly) struct CGSize viewportSize;
@property (copy, nonatomic, readonly) UIColor *feedBackgroundColor;
@property (nonatomic, readonly) long long columnCount;
@property (nonatomic, readonly) unsigned long long layoutOptions;
@property (nonatomic, readonly) double columnWidth;
@property (nonatomic, readonly) double horizontalMarginWidth;
@property (nonatomic, readonly) double rowHeight;
@property (nonatomic, readonly) double verticalMarginInRows;
@property (nonatomic, readonly) double articleContentInset;
@property (nonatomic, readonly) double articleSelectionCornerRadius;
@property (nonatomic, readonly) double articleSelectionInset;
@property (nonatomic, readonly) double scaleValue;
@property (nonatomic, readonly) NFLCellGeneratorManager *cellGeneratorManager;
@property (nonatomic, readonly) NFLFontCache *fontCache;
@property (nonatomic) _Bool allowsExcerptsInAllCells;
@property (nonatomic, readonly) _Bool authenticationSetup;
@property (nonatomic, readonly) _Bool showingPrefetchedPurchase;

+ (struct UIEdgeInsets)adjustedLayoutMargins:(struct UIEdgeInsets)arg1 viewportWidth:(double)arg2;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)cellWidthForColumnSpan:(long long)arg1;
- (double)cellHeightForRowSpan:(long long)arg1;
- (id)initWithViewportSize:(struct CGSize)arg1 defaultFeedLayoutSearchConfiguration:(id)arg2 columnCount:(long long)arg3 feedGutter:(double)arg4 feedTopMargin:(double)arg5 verticalMarginInRows:(double)arg6 preferredContentSizeCategory:(id)arg7 maximumContentInset:(double)arg8 selectionCornerRadius:(double)arg9 selectionInset:(double)arg10 showAccessoryText:(_Bool)arg11 layoutOptions:(unsigned long long)arg12;
- (id)initWithViewportSize:(struct CGSize)arg1 viewportInsets:(struct UIEdgeInsets)arg2 preferredContentSizeCategory:(id)arg3 showAccessoryText:(_Bool)arg4 layoutType:(long long)arg5 layoutOptions:(unsigned long long)arg6;
- (id)initWithViewportSize:(struct CGSize)arg1 viewportInsets:(struct UIEdgeInsets)arg2 preferredContentSizeCategory:(id)arg3 showAccessoryText:(_Bool)arg4;
- (_Bool)preservesLayoutMargins:(struct UIEdgeInsets)arg1;
- (_Bool)preservesTraitCollection:(id)arg1;

@end
