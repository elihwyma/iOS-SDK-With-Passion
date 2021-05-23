/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPPointUnit, LPTextViewStyle, UIColor;

__attribute__((visibility("hidden")))
@interface LPTapToLoadViewStyle : NSObject

{
    UIColor *_backgroundColor;
    UIColor *_tapHighlightColor;
    LPTextViewStyle *_caption;
    LPPointUnit *_width;
    LPPointUnit *_height;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *tapHighlightColor;
@property (nonatomic, readonly) LPTextViewStyle *caption;
@property (retain, nonatomic) LPPointUnit *width;
@property (retain, nonatomic) LPPointUnit *height;

- (id)initWithPlatform:(long long)arg1;

@end
