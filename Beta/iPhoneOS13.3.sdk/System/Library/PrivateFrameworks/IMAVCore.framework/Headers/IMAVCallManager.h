/*
 Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <Foundation/NSObject.h>

@class IMPowerAssertion, NSArray, NSDate, NSMutableArray, NSMutableDictionary;

@interface IMAVCallManager : NSObject

{
    IMPowerAssertion *_powerAssertion;
    NSMutableArray *_chatArray;
    NSMutableArray *_acChatProxyArray;
    NSMutableArray *_avChatProxyArray;
    NSMutableDictionary *_guidToACChatProxyMap;
    NSMutableDictionary *_guidToAVChatProxyMap;
    NSDate *_lastCallStateChange;
    int _avToken;
    int _acToken;
    unsigned int _avCallState;
    unsigned int _acCallState;
    unsigned int _globalCallState;
}

@property (nonatomic, readonly) NSArray *_FTCalls;
@property (nonatomic, readonly) unsigned int callState;
@property (nonatomic, readonly) _Bool hasActiveCall;
@property (nonatomic, readonly) NSArray *calls;

+ (id)sharedInstance;

- (id)init;
- (unsigned int)_callState;
- (id)_calls;
- (_Bool)_hasActiveFaceTimeCall;
- (void)_updateACChatProxyWithInfo:(id)arg1;
- (void)_updateAVChatProxyWithInfo:(id)arg1;
- (void)_updateOverallChatState;
- (void)_addIMAVChatToChatList:(id)arg1;
- (void)_addAVChatProxy:(id)arg1;
- (void)_addACChatProxy:(id)arg1;
- (void)_removeIMAVChatFromChatList:(id)arg1;
- (void)_sendProxyUpdate;
- (_Bool)_hasActiveAudioCall;
- (void)_updateAVCallState;
- (void)_updateACCallState;
- (void)_setAVCallState:(unsigned int)arg1;
- (void)_setACCallState:(unsigned int)arg1;
- (void)_setAVCallState:(unsigned int)arg1 quietly:(_Bool)arg2;
- (void)_setACCallState:(unsigned int)arg1 quietly:(_Bool)arg2;
- (id)_mutableFTCalls;
- (id)_copyMutableFTCalls;
- (void)_postStateChangeNamed:(id)arg1 fromState:(unsigned int)arg2 toState:(unsigned int)arg3 postType:(_Bool)arg4 type:(unsigned int)arg5;
- (void)_postStateChangeIfNecessary;
- (unsigned int)_callStateForType:(unsigned int)arg1;
- (id)_nonRetainingChatList;
- (id)_activeFaceTimeCall;
- (id)_activeAudioCall;

@end
