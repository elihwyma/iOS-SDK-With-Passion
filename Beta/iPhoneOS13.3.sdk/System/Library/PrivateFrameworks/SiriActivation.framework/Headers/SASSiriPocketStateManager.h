/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class CMPocketStateManager, NSString;

@interface SASSiriPocketStateManager : NSObject

{
    _Bool _pocketStateShouldPreventVoiceTrigger;
    CMPocketStateManager *_pocketStateManager;
    long long _currentPocketState;
}

@property (retain, nonatomic, getter=_pocketStateManager, setter=_setPocketStateManager:) CMPocketStateManager *pocketStateManager;
@property (nonatomic, getter=_currentPocketState, setter=_setCurrentPocketState:) long long currentPocketState;
@property (nonatomic, getter=_pocketStateShouldPreventVoiceTrigger, setter=_setPocketStateShouldPreventVoiceTrigger:) _Bool pocketStateShouldPreventVoiceTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;
+ (id)sharedManager;

- (id)init;
- (id)_init;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (_Bool)pocketStateShouldPreventVoiceTrigger;
- (void)_updateForPocketState:(long long)arg1;
- (id)_stringForPocketState:(long long)arg1;
- (void)queryForPocketStateWithCompletion:(CDUnknownBlockType)arg1;
- (long long)currentPocketState;

@end
