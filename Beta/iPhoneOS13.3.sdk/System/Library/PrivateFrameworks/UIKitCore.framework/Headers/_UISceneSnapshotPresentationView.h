/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class FBSceneSnapshot, NSString;

__attribute__((visibility("hidden")))
@interface _UISceneSnapshotPresentationView : UIView

{
    FBSceneSnapshot *_snapshot;
}

@property (retain, nonatomic) FBSceneSnapshot *sceneSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSnapshot:(id)arg1;

@end
