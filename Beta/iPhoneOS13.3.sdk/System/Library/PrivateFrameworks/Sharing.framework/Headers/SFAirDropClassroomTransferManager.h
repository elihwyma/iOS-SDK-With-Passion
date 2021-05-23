/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Sharing/SFXPCClient.h>

@class NSString;

@protocol SFAirDropClassroomTransferDelegate;

@interface SFAirDropClassroomTransferManager : SFXPCClient

{
    id <SFAirDropClassroomTransferDelegate> _delegate;
}

@property (weak, nonatomic) id <SFAirDropClassroomTransferDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (id)machServiceName;
- (void)activate;
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (_Bool)shouldEscapeXpcTryCatch;
- (void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)transferWithIdentifierWasAccepted:(id)arg1;
- (void)transferWithIdentifierWasDeclined:(id)arg1 withFailureReason:(unsigned long long)arg2;

@end
