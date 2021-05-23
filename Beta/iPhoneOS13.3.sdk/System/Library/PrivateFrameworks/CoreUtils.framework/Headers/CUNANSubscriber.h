/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSArray, NSString, WiFiAwareSubscriber;

@protocol OS_dispatch_queue;

@interface CUNANSubscriber : NSObject

{
    CDUnknownBlockType _activateCompletion;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct _opaque_pthread_mutex_t _mutex;
    struct LogCategory *_ucat;
    struct NSMutableDictionary *_wfaEndpoints;
    WiFiAwareSubscriber *_wfaSubscriber;
    unsigned int _changeFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSString *_serviceType;
    CDUnknownBlockType _endpointFoundHandler;
    CDUnknownBlockType _endpointLostHandler;
    CDUnknownBlockType _endpointChangedHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (nonatomic) unsigned int changeFlags;
@property (copy, readonly) NSArray *discoveredEndpoints;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) CDUnknownBlockType endpointFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType endpointLostHandler;
@property (copy, nonatomic) CDUnknownBlockType endpointChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (id)descriptionWithLevel:(int)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)subscriber:(id)arg1 receivedMessage:(id)arg2 fromPublishID:(unsigned char)arg3 address:(id)arg4;
- (void)subscriberStarted:(id)arg1;
- (void)subscriber:(id)arg1 failedToStartWithError:(long long)arg2;
- (void)subscriber:(id)arg1 terminatedWithReason:(long long)arg2;
- (void)subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;
- (void)subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;
- (void)_lostAllEndpoints;
- (void)_subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;
- (void)_subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;

@end
