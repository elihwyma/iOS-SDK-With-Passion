/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUMutableDownloadMetadata

@property (nonatomic) int downloadFeeAgreementStatus;
@property (nonatomic) int termsAndConditionsAgreementStatus;
@property (nonatomic) _Bool enforceWifiOnlyOverride;
@property (nonatomic, getter=isAutoDownload) _Bool autoDownload;
@property (nonatomic, getter=isDownloadOnly) _Bool downloadOnly;

- (id)initWithMetadata:(id)arg1;
- (void)applyDownloadPolicy:(id)arg1;

@end
