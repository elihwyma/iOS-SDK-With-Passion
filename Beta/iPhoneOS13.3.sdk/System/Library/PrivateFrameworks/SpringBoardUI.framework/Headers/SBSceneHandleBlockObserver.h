/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SBSceneHandleBlockObserver : NSObject

{
    NSMutableDictionary *_createBlocks;
    NSMutableDictionary *_destroyBlocks;
    NSMutableDictionary *_didUpdateContentStateBlocks;
    NSMutableDictionary *_didUpdateSettingsBlocks;
    NSMutableDictionary *_didUpdateClientSettingsBlocks;
    NSMutableDictionary *_didUpdatePairingStatusBlocks;
    _Bool _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)removeObserverForToken:(id)arg1;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)sceneHandle:(id)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg2;
- (id)observeCreate:(CDUnknownBlockType)arg1;
- (id)observeDestroy:(CDUnknownBlockType)arg1;
- (id)observeDidUpdateContentState:(CDUnknownBlockType)arg1;
- (id)observeDidUpdateSettings:(CDUnknownBlockType)arg1;
- (id)observeDidUpdateClientSettings:(CDUnknownBlockType)arg1;
- (id)observeDidUpdatePairingStatusForExternalIdentifiers:(CDUnknownBlockType)arg1;

@end
