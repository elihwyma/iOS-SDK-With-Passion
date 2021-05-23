/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@protocol SBIdleTimerCoordinating, SBIdleTimerProviding;

@interface SBIdleTimerCoordinatorHelper : NSObject

{
    id <SBIdleTimerProviding> _sourceProvider;
    id <SBIdleTimerCoordinating> _targetCoordinator;
    NSMapTable *_idleTimerCache;
}

@property (weak, nonatomic) id <SBIdleTimerProviding> sourceProvider;
@property (nonatomic, readonly) NSMapTable *idleTimerCache;
@property (weak, nonatomic) id <SBIdleTimerCoordinating> targetCoordinator;

- (id)init;
- (void)removeProvider:(id)arg1;
- (id)initWithSourceProvider:(id)arg1;
- (id)proposeIdleTimerBehavior:(id)arg1 fromProvider:(id)arg2 reason:(id)arg3;
- (id)updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3;
- (id)_updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3;
- (id)_updateProviderInfo:(id)arg1 behavior:(id)arg2 reason:(id)arg3;
- (_Bool)hasProvider:(id)arg1;
- (id)proposeProvider:(id)arg1 byCoordinator:(id)arg2 reason:(id)arg3;
- (void)bindProvider:(id)arg1 toSourceTimer:(id)arg2 behavior:(id)arg3 forReason:(id)arg4;
- (id)idleTimerProxyForProvider:(id)arg1;

@end
