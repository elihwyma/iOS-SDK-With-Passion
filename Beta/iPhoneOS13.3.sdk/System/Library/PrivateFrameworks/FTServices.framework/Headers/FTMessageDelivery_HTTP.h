/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/FTMessageDelivery.h>

@class IDSServerBag;

@protocol FTMessageDeliveryHTTPMobileNetworkManager, FTMessageDeliveryRemoteURLConnection, FTMessageDeliveryRemoteURLConnectionFactory;

@interface FTMessageDelivery_HTTP : FTMessageDelivery

{
    id <FTMessageDeliveryRemoteURLConnectionFactory> _remoteConnectionFactory;
    id <FTMessageDeliveryRemoteURLConnection> _remoteConnection;
    id <FTMessageDeliveryHTTPMobileNetworkManager> _mobileNetworkManager;
    _Bool _pendingRetryAfterAirplaneMode;
    double _retryTimeAfterAirplaneMode;
    CDUnknownBlockType _retryBackoffProvider;
    IDSServerBag *_idsServerBag;
    IDSServerBag *_iMessageServerBag;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (_Bool)sendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (_Bool)busy;
- (void)networkStateChanged;
- (void)_clearRetryTimer;
- (_Bool)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (id)initWithIDSServerBag:(id)arg1 iMessageServerBag:(id)arg2 remoteConnectionFactory:(id)arg3 mobileNetworkManager:(id)arg4 retryBackoffProvider:(CDUnknownBlockType)arg5;
- (void)_serverBagLoaded:(id)arg1;
- (void)_cleanupURLConnection;
- (void)_dequeueIfNeeded;
- (_Bool)_tryRetryMessageWithTimeInterval:(double)arg1;
- (void)_informDelegatesOfMessage:(id)arg1 result:(id)arg2 resultCode:(long long)arg3 error:(id)arg4;
- (id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id *)arg3;
- (void)_notifyDelegateAboutError:(id)arg1;
- (void)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_updateWiFiAssertions;
- (_Bool)sendMessageAtTopOfTheQueue:(id)arg1;

@end
