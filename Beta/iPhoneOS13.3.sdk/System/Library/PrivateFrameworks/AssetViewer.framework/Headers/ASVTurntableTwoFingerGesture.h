/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVTwoFingerGesture.h>

@protocol ASVTurntableTwoFingerGestureDelegate;

@interface ASVTurntableTwoFingerGesture : ASVTwoFingerGesture

{
    id <ASVTurntableTwoFingerGestureDelegate> _turntableDelegate;
}

@property (weak, nonatomic) id <ASVTurntableTwoFingerGestureDelegate> turntableDelegate;

- (void)finishGesture;
- (id)initWithFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3 turntableDelegate:(id)arg4;
- (void)updatePanWithFirstTouchLocation:secondTouchLocation:midPoint: /* Error: Ran out of types for this method. */;

@end
