/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/FBSApplicationDataStore.h>

@interface FBSApplicationDataStore (SceneStorage)

- (id)sceneStoreForIdentifier:(id)arg1 creatingIfNecessary:(_Bool)arg2;
- (void)removeSceneStoreForIdentifier:(id)arg1;
- (id)_cachedSceneDataStores;
- (id)_fetchPersistedSceneDataStores;
- (id)_createSceneStoreWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_modifyPersistentSceneData:(unsigned long long)arg1 identifier:(id)arg2 data:(id)arg3;
- (void)_setCachedSceneDataStores:(id)arg1;
- (void)_removeAllPersistentSceneData;
- (void)removeAllSceneDataStores;
- (void)enumerateSceneStoresUsingBlock:(CDUnknownBlockType)arg1;

@end
