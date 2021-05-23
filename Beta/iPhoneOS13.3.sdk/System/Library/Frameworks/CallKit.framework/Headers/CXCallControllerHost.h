/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;

@protocol CXCallControllerHostDelegate, OS_dispatch_queue;

@interface CXCallControllerHost : NSObject

{
    int _clientsShouldConnectToken;
    NSObject<OS_dispatch_queue> *_queue;
    id <CXCallControllerHostDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSXPCListener *_xpcListener;
    NSMutableDictionary *_callUUIDToCallMap;
    NSMutableDictionary *_callUUIDToPublicCallUUIDMap;
    NSMutableSet *_connections;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <CXCallControllerHostDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMutableDictionary *callUUIDToCallMap;
@property (retain, nonatomic) NSMutableDictionary *callUUIDToPublicCallUUIDMap;
@property (retain, nonatomic) NSMutableSet *connections;
@property (nonatomic, readonly) int clientsShouldConnectToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_sanitizedCallFromCall:(id)arg1 forCallControllerHostConnection:(id)arg2;
- (void)addOrUpdateCall:(id)arg1;
- (void)removeCall:(id)arg1;
- (id)_callsForCallControllerHostConnection:(id)arg1;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)callControllerHostConnectionInvalidated:(id)arg1;
- (void)callControllerHostConnection:(id)arg1 requestCalls:(CDUnknownBlockType)arg2;
- (void)callControllerHostConnection:(id)arg1 requestTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCalls:(id)arg1 delegate:(id)arg2 queue:(id)arg3;

@end
