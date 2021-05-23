/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVTwoFingerGesture.h>

@class ASVWorldGestureDragOffsetCorrector;

@protocol ASVWorldTwoFingerGestureDelegate;

@interface ASVWorldTwoFingerGesture : ASVTwoFingerGesture

{
    id <ASVWorldTwoFingerGestureDelegate> _worldDelegate;
    ASVWorldGestureDragOffsetCorrector *_dragOffsetCorrector;
}

@property (retain, nonatomic) ASVWorldGestureDragOffsetCorrector *dragOffsetCorrector;
@property (weak, nonatomic) id <ASVWorldTwoFingerGestureDelegate> worldDelegate;

- (id)initWithFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3 worldDelegate:(id)arg4;
- (void)finishGesture;
- (void)updatePanWithFirstTouchLocation:secondTouchLocation:midPoint: /* Error: Ran out of types for this method. */;

@end
