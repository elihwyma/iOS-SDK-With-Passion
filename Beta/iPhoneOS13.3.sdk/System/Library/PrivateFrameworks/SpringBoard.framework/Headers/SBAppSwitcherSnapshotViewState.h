/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBAppSwitcherSnapshotCacheEntry, SBDeviceApplicationSceneHandle;

@interface SBAppSwitcherSnapshotViewState : NSObject

{
    _Bool _animatingTransition;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    SBAppSwitcherSnapshotCacheEntry *_cacheEntry;
}

@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (retain, nonatomic) SBAppSwitcherSnapshotCacheEntry *cacheEntry;
@property (nonatomic, getter=isAnimatingTransition) _Bool animatingTransition;

@end
