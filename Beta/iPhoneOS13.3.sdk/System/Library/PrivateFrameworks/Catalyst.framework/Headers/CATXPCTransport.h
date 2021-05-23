/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATTransport.h>

@class NSString, NSXPCConnection;

@interface CATXPCTransport : CATTransport

{
    NSXPCConnection *mConnection;
    _Bool mConnectionHasResumed;
    _Bool mConnectionShouldInvalidate;
    _Bool mConnectionHasInvalidated;
}

@property (readonly) int auditSessionIdentifier;
@property (readonly) int processIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly) unsigned int effectiveGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)dealloc;
- (id)valueForEntitlement:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (void)suspendConnection;
- (void)resumeConnection;
- (void)invalidateConnection;
- (void)didInvalidate;
- (id)operationToSendMessage:(id)arg1;
- (void)setUpConnection;
- (void)tearDownConnection;
- (void)processMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)boolValueForEntitlement:(id)arg1;
- (void)transportSendMessageOperation:(id)arg1 processMessage:(id)arg2;

@end
