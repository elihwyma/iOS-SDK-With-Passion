/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVSingleFingerGesture.h>

@class ASVWorldGestureDragOffsetCorrector;

@protocol ASVWorldSingleFingerGestureDelegate;

@interface ASVWorldSingleFingerGesture : ASVSingleFingerGesture

{
    id <ASVWorldSingleFingerGestureDelegate> _worldDelegate;
    ASVWorldGestureDragOffsetCorrector *_dragOffsetCorrector;
}

@property (retain, nonatomic) ASVWorldGestureDragOffsetCorrector *dragOffsetCorrector;
@property (weak, nonatomic) id <ASVWorldSingleFingerGestureDelegate> worldDelegate;

- (id)initWithTouch:(id)arg1 dataSource:(id)arg2 worldDelegate:(id)arg3 enabledGestureTypes:(unsigned long long)arg4;
- (void)updateGesture;
- (void)finishGesture;
- (void)updateTranslation;
- (float)potentialAssetDistanceFromInitialLocationOnScreen;

@end
