/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <CALayer.h>

@class CATextLayer, NSAttributedString;

__attribute__((visibility("hidden")))
@interface AVPictureInPictureIndicatorLayer : CALayer

{
    NSAttributedString *_attributedText;
    struct CGSize _imageSize;
    struct NSEdgeInsets _languageAwareOutsets;
    double _lineHeight;
    double _baselineOffset;
    CATextLayer *_textLayer;
    CALayer *_imageLayer;
}

- (id)init;
- (void)layoutSublayers;
- (id)initWithDisplayScale:(double)arg1 placeholderImage:(struct CGImage *)arg2 opaque:(_Bool)arg3;
- (struct CGRect)textBoundingRectWhenDrawnInRect:(struct CGRect)arg1;

@end
