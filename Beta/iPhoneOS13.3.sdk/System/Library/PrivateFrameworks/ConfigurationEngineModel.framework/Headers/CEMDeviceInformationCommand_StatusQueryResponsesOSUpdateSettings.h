/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDate, NSNumber, NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings : CEMPayloadBase

{
    NSString *_statusCatalogURL;
    NSNumber *_statusIsDefaultCatalog;
    NSDate *_statusPreviousScanDate;
    NSString *_statusPreviousScanResult;
    NSNumber *_statusPerformPeriodicCheck;
    NSNumber *_statusAutomaticCheckEnabled;
    NSNumber *_statusBackgroundDownloadEnabled;
    NSNumber *_statusAutomaticAppInstallationEnabled;
    NSNumber *_statusAutomaticOSInstallationEnabled;
    NSNumber *_statusAutomaticSecurityUpdatesEnabled;
}

@property (copy, nonatomic) NSString *statusCatalogURL;
@property (copy, nonatomic) NSNumber *statusIsDefaultCatalog;
@property (copy, nonatomic) NSDate *statusPreviousScanDate;
@property (copy, nonatomic) NSString *statusPreviousScanResult;
@property (copy, nonatomic) NSNumber *statusPerformPeriodicCheck;
@property (copy, nonatomic) NSNumber *statusAutomaticCheckEnabled;
@property (copy, nonatomic) NSNumber *statusBackgroundDownloadEnabled;
@property (copy, nonatomic) NSNumber *statusAutomaticAppInstallationEnabled;
@property (copy, nonatomic) NSNumber *statusAutomaticOSInstallationEnabled;
@property (copy, nonatomic) NSNumber *statusAutomaticSecurityUpdatesEnabled;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithCatalogURL:(id)arg1 withIsDefaultCatalog:(id)arg2 withPreviousScanDate:(id)arg3 withPreviousScanResult:(id)arg4 withPerformPeriodicCheck:(id)arg5 withAutomaticCheckEnabled:(id)arg6 withBackgroundDownloadEnabled:(id)arg7 withAutomaticAppInstallationEnabled:(id)arg8 withAutomaticOSInstallationEnabled:(id)arg9 withAutomaticSecurityUpdatesEnabled:(id)arg10;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
