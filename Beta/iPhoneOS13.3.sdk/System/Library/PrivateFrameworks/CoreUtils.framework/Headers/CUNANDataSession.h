/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUNANEndpoint, NSString, WiFiAwareDataSession, WiFiAwarePublisher, WiFiAwarePublisherDataSessionHandle;

@protocol OS_dispatch_queue;

@interface CUNANDataSession : NSObject

{
    CDUnknownBlockType _activateCompletion;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    WiFiAwareDataSession *_wfaDataSessionClient;
    unsigned int _localInterfaceIndex;
    unsigned int _trafficFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_identifier;
    NSString *_label;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CUNANEndpoint *_peerEndpoint;
    WiFiAwarePublisher *_publisher;
    WiFiAwarePublisherDataSessionHandle *_wfaDataSessionServer;
    CDUnion_fab80606 _peerAddress;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned int localInterfaceIndex;
@property (nonatomic) CDUnion_fab80606 peerAddress;
@property (retain, nonatomic) WiFiAwarePublisher *publisher;
@property (retain, nonatomic) WiFiAwarePublisherDataSessionHandle *wfaDataSessionServer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (retain, nonatomic) CUNANEndpoint *peerEndpoint;
@property (nonatomic) unsigned int trafficFlags;
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
- (void)dataSessionRequestStarted:(id)arg1;
- (void)dataSession:(id)arg1 failedToStartWithError:(long long)arg2;
- (void)dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3;
- (void)dataSession:(id)arg1 terminatedWithReason:(long long)arg2;
- (void)_terminateServerDataSession;
- (_Bool)_dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3 error:(id *)arg4;

@end
