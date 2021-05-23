/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICCircleLayer.h>

@interface ICArcLayer : ICCircleLayer

{
    _Bool _drawClockwise;
    double _startAngle;
    double _endAngle;
}

@property (nonatomic) double startAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) _Bool drawClockwise;

- (void)drawInContext:(struct CGContext *)arg1;

@end
