/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransaction.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBSceneHandle;

@interface SBWaitForSceneContentAvailableTransaction : SBTransaction <Swift>

{
    SBSceneHandle *_sceneHandle;
    _Bool _isContentStateReady;
    _Bool _manualListener;
}

@property (copy, nonatomic, readonly) SBSceneHandle *sceneHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (id)initWithSceneHandle:(id)arg1 manualListener:(_Bool)arg2;
- (void)noteSceneContentIsReady:(_Bool)arg1;
- (void)_noteSceneContentReadinessDidChange:(_Bool)arg1;

@end
