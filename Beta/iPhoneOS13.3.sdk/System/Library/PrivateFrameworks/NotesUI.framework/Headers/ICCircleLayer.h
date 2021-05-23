/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <QuartzCore/CALayer.h>

@interface ICCircleLayer : CALayer

{
    double _strokeWidth;
    struct CGColor *_strokeColor;
    struct CGColor *_fillColor;
}

@property double strokeWidth;
@property (retain, nonatomic) struct CGColor *strokeColor;
@property (retain, nonatomic) struct CGColor *fillColor;

- (void)drawInContext:(struct CGContext *)arg1;

@end
