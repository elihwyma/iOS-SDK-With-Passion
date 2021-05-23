/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSDictionary, NSString, WiFiAwarePublisher;

@protocol OS_dispatch_queue;

@interface CUNANPublisher : NSObject

{
    CDUnknownBlockType _activateCompletion;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct NSMutableDictionary *_sessions;
    struct LogCategory *_ucat;
    WiFiAwarePublisher *_wfaPublisher;
    _Bool _dataPathEnabled;
    int _port;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSString *_name;
    NSString *_serviceType;
    NSDictionary *_textInfo;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _dataSessionStartedHandler;
    CDUnknownBlockType _dataSessionEndedHandler;
}

@property (nonatomic) _Bool dataPathEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int port;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSDictionary *textInfo;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType dataSessionStartedHandler;
@property (copy, nonatomic) CDUnknownBlockType dataSessionEndedHandler;
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
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)publisher:(id)arg1 receivedMessage:(id)arg2 fromSubscriberID:(unsigned char)arg3 subscriberAddress:(id)arg4;
- (void)publisher:(id)arg1 dataConfirmedForHandle:(id)arg2 localInterfaceIndex:(unsigned int)arg3 serviceSpecificInfo:(id)arg4;
- (void)publisher:(id)arg1 dataTerminatedForHandle:(id)arg2 reason:(long long)arg3;
- (void)publisherStarted:(id)arg1;
- (void)publisher:(id)arg1 failedToStartWithError:(long long)arg2;
- (void)publisher:(id)arg1 terminatedWithReason:(long long)arg2;
- (void)publisher:(id)arg1 dataIndicatedForHandle:(id)arg2 serviceSpecificInfo:(id)arg3;
- (void)_publisher:(id)arg1 dataConfirmedForHandle:(id)arg2 localInterfaceIndex:(unsigned int)arg3 serviceSpecificInfo:(id)arg4;

@end
