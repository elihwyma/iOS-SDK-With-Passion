/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class UIColor, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryViewLayout : TVViewLayout

{
    double _legendMaxWidth;
    UIColor *_legendBackgroundColor;
    double _legendCornerRadius;
    UIColor *_dividerColor;
    VUITextLayout *_legendLayout;
    VUITextLayout *_legendDescriptionLayout;
    VUITextLayout *_portraitLegendLayout;
    VUITextLayout *_portraitLegendDescriptionLayout;
    struct CGSize _logoSize;
    struct CGSize _legendSize;
    struct CGSize _dividerSize;
    struct CGSize _portraitLogoSize;
    struct CGSize _portraitLegendSize;
    struct CGSize _portraitDividerSize;
    struct UIEdgeInsets _logoMargin;
    struct UIEdgeInsets _legendsMargin;
    struct UIEdgeInsets _dividerMargin;
    struct UIEdgeInsets _portraitMargin;
    struct UIEdgeInsets _portraitLogoMargin;
    struct UIEdgeInsets _portraitLegendsMargin;
    struct UIEdgeInsets _portraitDividerMargin;
}

@property (nonatomic) struct CGSize logoSize;
@property (nonatomic) struct UIEdgeInsets logoMargin;
@property (nonatomic) struct CGSize legendSize;
@property (nonatomic) double legendMaxWidth;
@property (nonatomic) struct UIEdgeInsets legendsMargin;
@property (nonatomic, readonly) UIColor *legendBackgroundColor;
@property (nonatomic) double legendCornerRadius;
@property (nonatomic) struct UIEdgeInsets dividerMargin;
@property (nonatomic) struct CGSize dividerSize;
@property (nonatomic, readonly) UIColor *dividerColor;
@property (nonatomic, readonly) VUITextLayout *legendLayout;
@property (nonatomic, readonly) VUITextLayout *legendDescriptionLayout;
@property (nonatomic) struct UIEdgeInsets portraitMargin;
@property (nonatomic) struct CGSize portraitLogoSize;
@property (nonatomic) struct UIEdgeInsets portraitLogoMargin;
@property (nonatomic) struct CGSize portraitLegendSize;
@property (nonatomic) struct UIEdgeInsets portraitLegendsMargin;
@property (nonatomic) struct UIEdgeInsets portraitDividerMargin;
@property (nonatomic) struct CGSize portraitDividerSize;
@property (nonatomic, readonly) VUITextLayout *portraitLegendLayout;
@property (nonatomic, readonly) VUITextLayout *portraitLegendDescriptionLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;

@end
