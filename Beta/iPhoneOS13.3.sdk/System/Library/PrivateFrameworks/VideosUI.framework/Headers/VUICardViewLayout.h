/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSShadow, TVImageLayout, UIColor, VUIButtonLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUICardViewLayout : NSObject

{
    _Bool _hideFloatingBackground;
    NSShadow *_shadow;
    UIColor *_backgroundColor;
    UIColor *_darkBackgroundColor;
    UIColor *_highlightColor;
    UIColor *_darkHighlightColor;
    long long _imagePosition;
    TVImageLayout *_imageLayout;
    VUITextLayout *_secondaryTextLayout;
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_subtitleTextLayout;
    TVImageLayout *_appImageLayout;
    VUIButtonLayout *_buttonLayout;
    struct TVCornerRadii _borderRadii;
}

@property (nonatomic) _Bool hideFloatingBackground;
@property (retain, nonatomic) NSShadow *shadow;
@property (nonatomic) struct TVCornerRadii borderRadii;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *darkBackgroundColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIColor *darkHighlightColor;
@property (nonatomic) long long imagePosition;
@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) VUITextLayout *secondaryTextLayout;
@property (retain, nonatomic) VUITextLayout *titleTextLayout;
@property (retain, nonatomic) VUITextLayout *subtitleTextLayout;
@property (retain, nonatomic) TVImageLayout *appImageLayout;
@property (retain, nonatomic) VUIButtonLayout *buttonLayout;

+ (double)cardHeightForElementType:(unsigned long long)arg1 width:(double)arg2;
+ (double)cardHeightForElementType:(unsigned long long)arg1;

- (id)init;

@end
