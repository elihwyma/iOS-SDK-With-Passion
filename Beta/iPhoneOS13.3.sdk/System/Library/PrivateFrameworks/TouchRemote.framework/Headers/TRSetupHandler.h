/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@protocol TRSetupHandlerDelegate;

@interface TRSetupHandler : NSObject

{
    id <TRSetupHandlerDelegate> _delegate;
}

@property (weak, nonatomic) id <TRSetupHandlerDelegate> delegate;

- (id)initWithDelegate:(id)arg1;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)_handleCompletionRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleConfigurationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleProxyDeviceRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleProxyAuthenticationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleCompanionAuthenticationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleHandshakeRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleNetworkRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleActivationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;

@end
