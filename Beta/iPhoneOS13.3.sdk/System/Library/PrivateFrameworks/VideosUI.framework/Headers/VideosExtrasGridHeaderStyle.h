/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface VideosExtrasGridHeaderStyle : NSObject

{
    _Bool _showsImage;
    NSString *_titleTextStyle;
    double _titleLineHeight;
    NSString *_subtitleTextStyle;
    double _subtitleLineHeight;
    double _bottomLabelDescender;
    NSDictionary *_titleDefaultFontAttributes;
    NSDictionary *_subtitleDefaultFontAttributes;
    UIColor *_titleColor;
    UIColor *_subtitleColor;
    struct UIEdgeInsets _insets;
}

@property (nonatomic) _Bool showsImage;
@property (nonatomic) struct UIEdgeInsets insets;
@property (retain, nonatomic) NSString *titleTextStyle;
@property (nonatomic) double titleLineHeight;
@property (retain, nonatomic) NSString *subtitleTextStyle;
@property (nonatomic) double subtitleLineHeight;
@property (nonatomic) double bottomLabelDescender;
@property (retain, nonatomic) NSDictionary *titleDefaultFontAttributes;
@property (retain, nonatomic) NSDictionary *subtitleDefaultFontAttributes;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *subtitleColor;

@end
