/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class NSSet;

@interface UIDestroySceneAction : BSAction

@property (nonatomic, readonly) unsigned long long preferredAnimationType;
@property (nonatomic, readonly) NSSet *persistedIdentifiers;
@property (nonatomic, readonly) _Bool destroySceneSession;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
- (id)initWithPersistedIdentifiers:(id)arg1 preferredAnimationType:(unsigned long long)arg2 forDestroyingSession:(_Bool)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithPreferredAnimationType:(unsigned long long)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPersistedIdentifiers:(id)arg1 preferredAnimationType:(unsigned long long)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
