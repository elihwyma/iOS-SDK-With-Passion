/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/FTMessageDelivery.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol FTMessageDeliveryAPSConnection, FTMessageDeliveryAPSMobileNetworkManager;

@interface FTMessageDelivery_APS : FTMessageDelivery

{
    id <FTMessageDeliveryAPSConnection> _connection;
    id <FTMessageDeliveryAPSMobileNetworkManager> _mobileNetworkManager;
    Class _APSOutgoingMessageClass;
    NSMutableArray *_enabledTopics;
    NSMutableDictionary *_ftMessageMap;
    NSMutableDictionary *_startDateMap;
    NSMutableDictionary *_bodyMap;
    NSMutableDictionary *_apsMessageMap;
    NSMutableDictionary *_timerMap;
    NSMutableDictionary *_deathTimerMap;
    NSMutableDictionary *_retriesMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)connection;
- (_Bool)sendMessage:(id)arg1;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)cancelMessage:(id)arg1;
- (void)_updateTopics;
- (_Bool)busy;
- (_Bool)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;
- (long long)maxMessageSize;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (id)allMessages;
- (long long)maxLargeMessageSize;
- (void)_serverBagLoaded:(id)arg1;
- (void)_dequeueIfNeeded;
- (void)_setEnabledTopics:(id)arg1;
- (id)initWithAPSConnection:(id)arg1 mobileNetworkManager:(id)arg2;
- (void)_invalidateTimerForMessageID:(id)arg1;
- (void)_messageCompletelyTimedOut:(id)arg1;
- (void)_invalidateDeathTimerForMessageID:(id)arg1;
- (id)_currentMessages;
- (id)_apsOutgoingMessageForFTMessage:(id)arg1;
- (id)_messageForAPSOutgoingMessage:(id)arg1;
- (_Bool)_fillMessageParameters:(id *)arg1 ftMessage:(id *)arg2;
- (long long)_retryCountForMessage:(id)arg1;
- (void)_messageNeedsRetry:(id)arg1;
- (void)_setMapForMessage:(id)arg1 apsMessage:(id)arg2 messageBody:(id)arg3 timeoutTime:(double)arg4 timeoutSelector:(SEL)arg5 retries:(id)arg6;
- (void)_notifyDelegateAboutError:(id)arg1 resultCode:(long long)arg2 forMessage:(id)arg3;
- (void)_clearMapForMessageID:(id)arg1;
- (void)_messageACKTimedOut:(id)arg1;
- (void)_messageSendTimedOut:(id)arg1;
- (id)_apsMessageForMessage:(id)arg1 body:(id)arg2;
- (void)_noteMessageSent:(id)arg1 ftMessage:(id)arg2 body:(id)arg3;
- (void)_noteMessageFailed:(id)arg1 ftMessage:(id)arg2 allowRetry:(_Bool)arg3 error:(id)arg4;
- (id)_bodyForMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 ftMessage:(id)arg2;
- (id)_requiredTopics;
- (id)_apsMessageBodyForMessage:(id)arg1;
- (void)_powerLogEvent:(id)arg1 dictionary:(id)arg2;
- (void)_noteMessageSucceeded:(id)arg1 ftMessage:(id)arg2 error:(id)arg3 result:(id)arg4 resultCode:(long long)arg5;
- (_Bool)_isBusyWithMessage:(id)arg1;
- (void)_noteMessageACKd:(id)arg1 ftMessage:(id)arg2;
- (id)_currentAPSMessages;
- (id)_currentTimers;

@end
