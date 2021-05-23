/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

@interface SXTouchForwardingView : UIView

{
    CDUnknownBlockType _touchedBlock;
    double _lastTouchTimestamp;
}

@property (nonatomic) double lastTouchTimestamp;
@property (copy, nonatomic, setter=onTouch:) CDUnknownBlockType touchedBlock;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
