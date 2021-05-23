/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <AirTraffic/ATMessageLink.h>

#import <AirTraffic/Swift-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface ATMessageLinkProxy : ATMessageLink <Swift>

{
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_endpoint;
    NSHashTable *_observers;
    NSMutableDictionary *_requestHandlers;
    NSMutableSet *_streams;
    _Bool _open;
    _Bool _initialized;
    NSString *_identifier;
    int _endpointType;
}

@property (nonatomic, getter=isInitialized) _Bool initialized;
@property (nonatomic, getter=isOpen) _Bool open;
@property (nonatomic) int endpointType;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (void)sendResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)messageLinkWasOpened:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addRequestHandler:(id)arg1 forDataClass:(id)arg2;
- (void)removeRequestHandlerForDataClass:(id)arg1;

@end
