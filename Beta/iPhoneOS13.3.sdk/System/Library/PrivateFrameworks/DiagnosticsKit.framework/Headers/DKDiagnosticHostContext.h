/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@protocol DKExtensionHostAdapterDelegate;

@interface DKDiagnosticHostContext : NSExtensionContext

{
    id <DKExtensionHostAdapterDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <DKExtensionHostAdapterDelegate> delegate;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)cancelWithCompletion:(CDUnknownBlockType)arg1;
- (void)startWithPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remoteHostEnableVolumeHUD:(_Bool)arg1;
- (void)remoteHostSetScreenToBrightness:(float)arg1 animate:(_Bool)arg2;
- (void)remoteHostGetAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remoteHostCompleteWithResult:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
