/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Sharing/SFXPCClient.h>

@class NSMutableDictionary, NSString;

@protocol SFAirDropTransferObserverDelegate;

@interface SFAirDropTransferObserver : SFXPCClient

{
    id <SFAirDropTransferObserverDelegate> _delegate;
    NSMutableDictionary *_transferIdentifierToTransfer;
}

@property (retain) NSMutableDictionary *transferIdentifierToTransfer;
@property (weak, nonatomic) id <SFAirDropTransferObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (id)machServiceName;
- (void)activate;
- (void)updatedTransfer:(id)arg1;
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (void)observeForLocalOnlyPropertiesOnTransfer:(id)arg1;
- (void)updateActionHandlersOnTransfer:(id)arg1;
- (void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)arg1;
- (void)removedTransfer:(id)arg1;
- (_Bool)shouldEscapeXpcTryCatch;

@end
