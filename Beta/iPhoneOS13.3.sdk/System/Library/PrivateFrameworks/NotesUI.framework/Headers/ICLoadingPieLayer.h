/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, NSProgress;

@interface ICLoadingPieLayer : CALayer

{
    _Bool _removeOnCompletion;
    double _progress;
    NSProgress *_observedProgress;
    CAShapeLayer *_pieLayer;
    CAShapeLayer *_backgroundLayer;
}

@property (retain, nonatomic) CAShapeLayer *pieLayer;
@property (retain, nonatomic) CAShapeLayer *backgroundLayer;
@property (nonatomic, readonly) double progress;
@property (retain, nonatomic) NSProgress *observedProgress;
@property (nonatomic) _Bool removeOnCompletion;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setProgress:(double)arg1;
- (struct CGPath *)newPathForProgress:(double)arg1;

@end
