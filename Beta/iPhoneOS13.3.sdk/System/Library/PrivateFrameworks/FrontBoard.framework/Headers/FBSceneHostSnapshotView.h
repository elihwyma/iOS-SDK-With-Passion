/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <UIKit/UIView.h>

@class FBSceneSnapshot, NSString;

@interface FBSceneHostSnapshotView : UIView

{
    FBSceneSnapshot *_snapshot;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) FBSceneSnapshot *sceneSnapshot;
@property (retain, nonatomic, readonly) id IOSurface;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)_initWithSnapshot:(id)arg1;

@end
