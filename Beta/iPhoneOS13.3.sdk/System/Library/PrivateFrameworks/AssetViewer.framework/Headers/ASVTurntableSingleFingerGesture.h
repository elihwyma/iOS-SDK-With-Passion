/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVSingleFingerGesture.h>

@protocol ASVTurntableSingleFingerGestureDelegate;

@interface ASVTurntableSingleFingerGesture : ASVSingleFingerGesture

{
    id <ASVTurntableSingleFingerGestureDelegate> _turntableDelegate;
}

@property (weak, nonatomic) id <ASVTurntableSingleFingerGestureDelegate> turntableDelegate;

- (void)updateGesture;
- (void)finishGesture;
- (void)updatePan;
- (id)initWithTouch:(id)arg1 dataSource:(id)arg2 turntableDelegate:(id)arg3 enabledGestureTypes:(unsigned long long)arg4;

@end
