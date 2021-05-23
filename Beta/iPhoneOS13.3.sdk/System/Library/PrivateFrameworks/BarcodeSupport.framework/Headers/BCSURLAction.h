/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <BarcodeSupport/BCSAction.h>

@class CTCellularPlanManagerCameraScanAction, CoreTelephonyClient, LSApplicationProxy, NSArray, NSURL, SecureChannelAction;

__attribute__((visibility("hidden")))
@interface BCSURLAction : BCSAction

{
    NSArray *_appLinks;
    LSApplicationProxy *_applicationProxy;
    _Bool _deviceDataIsUnavailable;
    NSURL *_appStoreSearchURLForUnsupportedScheme;
    SecureChannelAction *_scAction;
    CoreTelephonyClient *_coreTelephonyClient;
    CTCellularPlanManagerCameraScanAction *_cellularPlanAction;
    _Bool _hasPreferredAppLink;
}

@property (nonatomic, readonly) LSApplicationProxy *targetApplication;
@property (nonatomic, readonly) _Bool mustOpenAppLinkInApp;
@property (nonatomic, readonly) unsigned long long appLinkCount;
@property (nonatomic, readonly) _Bool hasPreferredAppLink;

- (id)url;
- (void)performAction;
- (id)appLinks;
- (void)performDefaultAction;
- (id)urlThatCanBeOpened;
- (id)actionPickerItems;
- (id)localizedDefaultActionDescription;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (void)determineActionabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)debugDescriptionExtraInfoDictionary;
- (id)localizedDefaultActionTitle;
- (void)performDefaultActionWithFBOptions:(id)arg1;
- (_Bool)_hasSecureChannelAction;
- (_Bool)_hasCellularPlanAction;
- (id)_actionDescriptionForURL:(id)arg1 application:(id)arg2 shouldShowHostNameForSafariURL:(_Bool)arg3;
- (id)_actionDescriptionWithoutTargetApplicationForURL:(id)arg1;
- (_Bool)_tryDetermineActionabilityForSpecialCodesFromQRScannerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_resolveTargetApplicationForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isCodeFromQRScanner;
- (_Bool)_shouldOpenInAppForAppLink:(id)arg1;
- (_Bool)_shouldBlockHandlingURL:(id)arg1;

@end
