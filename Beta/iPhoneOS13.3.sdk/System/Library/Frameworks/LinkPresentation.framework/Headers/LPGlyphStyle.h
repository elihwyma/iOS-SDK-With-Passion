/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPImage, LPImageViewStyle, LPPadding, LPPointUnit;

__attribute__((visibility("hidden")))
@interface LPGlyphStyle : NSObject

{
    LPImage *_image;
    LPPadding *_padding;
    double _opacity;
    LPImageViewStyle *_imageStyle;
    LPPointUnit *_baselineOffset;
}

@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic, readonly) LPPadding *padding;
@property (nonatomic) double opacity;
@property (nonatomic, readonly) LPImageViewStyle *imageStyle;
@property (retain, nonatomic) LPPointUnit *baselineOffset;

- (id)init;
- (id)initSearchGlyph;

@end
