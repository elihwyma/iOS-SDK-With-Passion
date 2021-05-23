/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSObject.h>

@class FTMessageQueue, IDSBaseMessage, IMTimer, NSArray, NSNumber, NSString;

@interface FTMessageDelivery : NSObject

{
    unsigned int _retries;
    FTMessageQueue *_queue;
    NSString *_userAgent;
    unsigned long long _maxConcurrentMessages;
    _Bool _retryInAirplaneMode;
    _Bool _logToRegistration;
    IMTimer *_timer;
}

@property (copy) NSString *userAgent;
@property (copy) NSNumber *protocolVersion;
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

+ (id)alloc;
+ (id)_errorForTDMessageDeliveryStatus:(long long)arg1 userInfo:(id)arg2;
+ (Class)HTTPMessageDeliveryClass;
+ (Class)APNSMessageDeliveryClass;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)_queue;
- (_Bool)sendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)networkStateChanged;
- (void)_clearRetryTimer;
- (_Bool)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;
- (void)_retryTimerHit:(id)arg1;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(long long)arg4;
- (void)_setRetryTimer:(double)arg1;
- (void)_signMessage:(id)arg1 useDataSignatures:(_Bool)arg2 body:(id)arg3 queryString:(id)arg4 intoDictionary:(id)arg5;

@end
