/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMApplicationListInstalledApplicationsCommand_StatusInstalledApplicationListItem : CEMPayloadBase

{
    NSString *_statusBundleIdentifier;
    NSString *_statusExternalVersionIdentifier;
    NSString *_statusVersion;
    NSString *_statusShortVersion;
    NSString *_statusName;
    NSString *_statusBundleSize;
    NSString *_statusDynamicSize;
    NSNumber *_statusIsValidated;
    NSNumber *_statusInstalling;
    NSNumber *_statusAppStoreVendable;
    NSNumber *_statusDeviceBasedVPP;
    NSNumber *_statusBetaApp;
    NSNumber *_statusAdHocCodeSigned;
    NSNumber *_statusHasUpdateAvailable;
    NSNumber *_statusDownloadFailed;
    NSNumber *_statusDownloadWaiting;
    NSNumber *_statusDownloadPaused;
    NSNumber *_statusDownloadCancelled;
}

@property (copy, nonatomic) NSString *statusBundleIdentifier;
@property (copy, nonatomic) NSString *statusExternalVersionIdentifier;
@property (copy, nonatomic) NSString *statusVersion;
@property (copy, nonatomic) NSString *statusShortVersion;
@property (copy, nonatomic) NSString *statusName;
@property (copy, nonatomic) NSString *statusBundleSize;
@property (copy, nonatomic) NSString *statusDynamicSize;
@property (copy, nonatomic) NSNumber *statusIsValidated;
@property (copy, nonatomic) NSNumber *statusInstalling;
@property (copy, nonatomic) NSNumber *statusAppStoreVendable;
@property (copy, nonatomic) NSNumber *statusDeviceBasedVPP;
@property (copy, nonatomic) NSNumber *statusBetaApp;
@property (copy, nonatomic) NSNumber *statusAdHocCodeSigned;
@property (copy, nonatomic) NSNumber *statusHasUpdateAvailable;
@property (copy, nonatomic) NSNumber *statusDownloadFailed;
@property (copy, nonatomic) NSNumber *statusDownloadWaiting;
@property (copy, nonatomic) NSNumber *statusDownloadPaused;
@property (copy, nonatomic) NSNumber *statusDownloadCancelled;

+ (id)allowedStatusKeys;
+ (id)buildWithBundleIdentifier:(id)arg1 withExternalVersionIdentifier:(id)arg2 withVersion:(id)arg3 withShortVersion:(id)arg4 withName:(id)arg5 withBundleSize:(id)arg6 withDynamicSize:(id)arg7 withIsValidated:(id)arg8 withInstalling:(id)arg9 withAppStoreVendable:(id)arg10 withDeviceBasedVPP:(id)arg11 withBetaApp:(id)arg12 withAdHocCodeSigned:(id)arg13 withHasUpdateAvailable:(id)arg14 withDownloadFailed:(id)arg15 withDownloadWaiting:(id)arg16 withDownloadPaused:(id)arg17 withDownloadCancelled:(id)arg18;
+ (id)buildRequiredOnlyWithBundleIdentifier:(id)arg1 withExternalVersionIdentifier:(id)arg2 withVersion:(id)arg3 withShortVersion:(id)arg4 withName:(id)arg5 withAppStoreVendable:(id)arg6 withDeviceBasedVPP:(id)arg7 withBetaApp:(id)arg8 withAdHocCodeSigned:(id)arg9 withHasUpdateAvailable:(id)arg10;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
