/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, SBWakeDestination;

@interface SBSecureAppManager : NSObject

{
    NSMutableDictionary *_secureAppActions;
    NSMutableArray *_remoteAlertActions;
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSMutableDictionary *secureAppActions;
@property (retain, nonatomic) NSMutableArray *remoteAlertActions;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic, readonly) _Bool hasSecureApp;
@property (nonatomic, readonly) _Bool hasWakeDestinaton;
@property (nonatomic, readonly) SBWakeDestination *wakeDestinaton;

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)hasSecureAppOfType:(unsigned long long)arg1;
- (id)secureAppAction;
- (id)newApplicationSceneEntityForCurrentSecureApp;
- (void)addLockScreenContentAction:(id)arg1;
- (void)_addSecureAppAction:(id)arg1;
- (void)_addRemoteAlertLockScreenContentAction:(id)arg1;
- (void)_enumerateSecureAppActionsByPriorityUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSecureAppActionsOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_applicationSceneEntityForAction:(id)arg1;
- (id)_applicationForAction:(id)arg1;

@end
