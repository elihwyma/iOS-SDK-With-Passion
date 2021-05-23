/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class UIColor, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIProductMetadataLayout : TVViewLayout

{
    VUITextLayout *_headerTextLayout;
    VUITextLayout *_infoHeaderTextLayout;
    VUITextLayout *_infoBodyTextLayout;
    VUITextLayout *_infoDescriptionTextLayout;
    VUITextLayout *_footerTextLayout;
    double _descriptionLineSpacing;
    UIColor *_seeMoreTextColor;
    UIColor *_darkSeeMoreTextColor;
    UIColor *_highlightedDescriptionText;
    UIColor *_darkHighlightedDescriptionText;
}

@property (nonatomic, readonly) VUITextLayout *headerTextLayout;
@property (nonatomic, readonly) VUITextLayout *infoHeaderTextLayout;
@property (nonatomic, readonly) VUITextLayout *infoBodyTextLayout;
@property (nonatomic, readonly) VUITextLayout *infoDescriptionTextLayout;
@property (nonatomic, readonly) VUITextLayout *footerTextLayout;
@property (nonatomic, readonly) double descriptionLineSpacing;
@property (nonatomic, readonly) double bottomPadding;
@property (nonatomic, readonly) double verticalSpacing;
@property (nonatomic, readonly) UIColor *seeMoreTextColor;
@property (nonatomic, readonly) UIColor *darkSeeMoreTextColor;
@property (nonatomic, readonly) UIColor *highlightedDescriptionText;
@property (nonatomic, readonly) UIColor *darkHighlightedDescriptionText;
@property (nonatomic, readonly) _Bool isHorizontal;
@property (nonatomic, readonly) _Bool isDynamicTextEnabled;
@property (nonatomic, readonly) _Bool isTVOS;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;
- (void)_setupLayouts;

@end
