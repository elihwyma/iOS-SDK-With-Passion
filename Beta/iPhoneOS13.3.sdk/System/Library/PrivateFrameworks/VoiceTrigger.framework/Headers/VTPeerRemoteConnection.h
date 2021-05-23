/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class IDSService, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, VTPeerRemoteConnectionDelegate;

@interface VTPeerRemoteConnection : NSObject

{
    NSString *_identifier;
    _Bool _requireNearbyPeer;
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_idsService;
    NSMutableDictionary *_completions;
    NSMutableDictionary *_responseClasses;
    id <VTPeerRemoteConnectionDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setDelegate:(id)arg1;
- (id)_service;
- (id)_account;
- (id)_destination;
- (id)serviceIdentifier;
- (id)_pairedDevice;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (id)initWithServiceIdentifier:(id)arg1 requireNearbyPeer:(_Bool)arg2;
- (void)_invokeCompletionForIdentifier:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_sendResponse:(id)arg1 forRequestId:(id)arg2;
- (id)_wrappedSendFailureError:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1;
- (_Bool)hasPeer;
- (_Bool)_hasNearbyPeer;
- (void)sendRequestType:(unsigned long long)arg1 nonWaking:(_Bool)arg2;

@end
