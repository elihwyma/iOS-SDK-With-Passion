/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface VideosExtrasGridSectionHeaderStyle : NSObject

{
    NSString *_textStyle;
    NSDictionary *_defaultFontAttributes;
    UIColor *_textColor;
    double _textBaselineHeight;
    double _textBaselineDescender;
    struct UIEdgeInsets _insets;
}

@property (retain, nonatomic) NSString *textStyle;
@property (retain, nonatomic) NSDictionary *defaultFontAttributes;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct UIEdgeInsets insets;
@property (nonatomic) double textBaselineHeight;
@property (nonatomic) double textBaselineDescender;

@end
