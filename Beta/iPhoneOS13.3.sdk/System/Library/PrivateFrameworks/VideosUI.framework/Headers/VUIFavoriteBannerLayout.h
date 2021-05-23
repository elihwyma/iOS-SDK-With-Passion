/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class TVImageLayout, UIColor, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFavoriteBannerLayout : NSObject

{
    _Bool _isPreModeBanner;
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    double _bannerMinHeight;
    double _maxTextWidth;
    double _subtitleBaseLine;
    VUITextLayout *_titleLayout;
    VUITextLayout *_subtitleLayout;
    TVImageLayout *_imageLayout;
    struct TVCornerRadii _borderRadii;
    struct UIEdgeInsets _margin;
}

@property (nonatomic, readonly) _Bool isPreModeBanner;
@property (nonatomic, readonly) struct TVCornerRadii borderRadii;
@property (nonatomic, readonly) struct UIEdgeInsets margin;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *highlightedBackgroundColor;
@property (nonatomic, readonly) double bannerMinHeight;
@property (nonatomic, readonly) double maxTextWidth;
@property (nonatomic, readonly) double subtitleBaseLine;
@property (nonatomic, readonly) VUITextLayout *titleLayout;
@property (nonatomic, readonly) VUITextLayout *subtitleLayout;
@property (nonatomic, readonly) TVImageLayout *imageLayout;
@property (nonatomic, readonly) unsigned long long bannerStyle;

+ (id)postModeBannerLayout;
+ (id)preModeBannerLayout;

- (id)initWithBannerType:(_Bool)arg1;

@end
