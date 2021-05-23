/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSObject.h>

@class FTMessageDelivery, FTMessageQueue, IDSBaseMessage, NSArray, NSString;

@interface FTMessageDelivery_DualMode : NSObject

{
    FTMessageDelivery *_httpDelivery;
    FTMessageDelivery *_apsDelivery;
    FTMessageQueue *_dualModeQueue;
    NSString *_userAgentString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *userAgent;
@property (readonly) _Bool hasQueuedItems;
@property (readonly) _Bool busy;
@property _Bool retryInAirplaneMode;
@property _Bool logToRegistration;
@property (readonly) IDSBaseMessage *currentMessage;
@property (readonly) NSArray *queuedMessages;
@property (readonly) NSArray *allMessages;
@property (readonly) long long maxMessageSize;
@property (readonly) long long maxLargeMessageSize;
@property unsigned long long maxConcurrentMessages;

- (void)invalidate;
- (_Bool)sendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (id)initWithPreferedType:(long long)arg1;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (_Bool)_isInBackoffMode;
- (long long)_randomPercentageChanceForDualDelivery;
- (void)dequeueMessageIfNeeded;
- (_Bool)_shouldUseDualDeliveryForMessage:(id)arg1;
- (void)handleTranslationAndDeliveryOnAPS:(id)arg1;
- (void)_enterBackOffMode;

@end
