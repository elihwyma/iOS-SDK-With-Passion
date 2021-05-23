/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

#import <DiagnosticsKit/Swift-Protocol.h>

@class DATestViewOperation, DKDiagnosticRegistry, DKExtensionDiscovery, NSString;

@protocol DKAssetResponder, DKBrightnessResponder, DKViewControllerDelegate, DKVolumeHUDResponder, OS_dispatch_queue;

@interface DKDiagnosticManager : NSObject <Swift>

{
    id <DKAssetResponder> _assetResponder;
    NSObject<OS_dispatch_queue> *_diagnosticsManagerQueue;
    NSObject<OS_dispatch_queue> *_diagnosticListQueue;
    DKDiagnosticRegistry *_registry;
    DKExtensionDiscovery *_discovery;
    struct NSString *_bundleIdentifier;
    DATestViewOperation *_currentLegacyDiagnostic;
    id <DKBrightnessResponder> _brightnessResponder;
    id <DKVolumeHUDResponder> _volumeHUDResponder;
    id <DKViewControllerDelegate> _viewControllerDelegate;
}

@property (weak, nonatomic) id <DKBrightnessResponder> brightnessResponder;
@property (weak, nonatomic) id <DKVolumeHUDResponder> volumeHUDResponder;
@property (weak, nonatomic) id <DKViewControllerDelegate> viewControllerDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diagnosticsManagerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diagnosticListQueue;
@property (retain, nonatomic) DKDiagnosticRegistry *registry;
@property (retain, nonatomic) DKExtensionDiscovery *discovery;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) DATestViewOperation *currentLegacyDiagnostic;
@property (weak, nonatomic) id <DKBrightnessResponder> brightnessResponder;
@property (weak, nonatomic) id <DKVolumeHUDResponder> volumeHUDResponder;
@property (weak, nonatomic) id <DKViewControllerDelegate> viewControllerDelegate;
@property (weak, nonatomic) id <DKAssetResponder> assetResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithBundleIdentifier:(struct NSString *)arg1;
- (_Bool)_isDeviceLocked;
- (id)adapterForIdentifier:(id)arg1;
- (void)operation:(id)arg1 presentViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setScreenToBrightness:(float)arg1 animate:(_Bool)arg2;
- (void)enableVolumeHUD:(_Bool)arg1;
- (void)operation:(id)arg1 dismissViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_checkPrerequisitesForDiagnostic:(id)arg1 parameters:(id)arg2 error:(id *)arg3;
- (_Bool)_freeSpaceAvailable:(id)arg1;
- (void)request:(id)arg1 presentViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)request:(id)arg1 dismissViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)diagnosticsWithCompletion:(CDUnknownBlockType)arg1;
- (id)attributesForIdentifier:(id)arg1;
- (void)cancelAllDiagnostics;

@end
