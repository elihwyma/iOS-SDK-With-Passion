/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXProvider.h>

@class CXProviderExtensionVendorContext, NSString;

@interface CXExtensionProvider : CXProvider

{
    CXProviderExtensionVendorContext *_extensionContext;
}

@property (retain, nonatomic) CXProviderExtensionVendorContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)hostProtocolDelegate;
- (void)providerExtensionVendorContext:(id)arg1 receivedCommittedTransaction:(id)arg2;
- (void)providerExtensionVendorContext:(id)arg1 handledActionTimeout:(id)arg2;
- (void)providerExtensionVendorContext:(id)arg1 handledAudioSessionActivationStateChangedTo:(_Bool)arg2;
- (_Bool)requiresProxyingAVAudioSessionState;

@end
