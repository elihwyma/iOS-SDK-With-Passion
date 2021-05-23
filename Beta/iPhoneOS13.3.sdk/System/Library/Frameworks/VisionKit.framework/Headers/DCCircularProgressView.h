/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, NSProgress;

__attribute__((visibility("hidden")))
@interface DCCircularProgressView : UIView

{
    double _progress;
    NSProgress *_observedProgress;
    CAShapeLayer *_circleLayer;
}

@property (retain, nonatomic) CAShapeLayer *circleLayer;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSProgress *observedProgress;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (struct CGPath *)newPathForProgress:(double)arg1;

@end
