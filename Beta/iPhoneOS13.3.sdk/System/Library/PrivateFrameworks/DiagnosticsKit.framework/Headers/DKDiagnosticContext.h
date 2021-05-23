/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@interface DKDiagnosticContext : NSExtensionContext

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)completeWithDiagnosticResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelRemoteDiagnosticWithCompletion:(CDUnknownBlockType)arg1;
- (void)startRemoteDiagnosticWithDiagnosticParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setScreenToBrightness:(float)arg1 animate:(_Bool)arg2;
- (void)enableVolumeHUD:(_Bool)arg1;

@end
