/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPArchiveRecordsResponse, CKDPAssetUploadTokenRetrieveResponse, CKDPBundlesForContainerResponse, CKDPCodeFunctionInvokeResponse, CKDPDeleteContainerResponse, CKDPFetchArchivedRecordsResponse, CKDPMarkAssetBrokenResponse, CKDPNotificationMarkReadResponse, CKDPNotificationSyncResponse, CKDPOperation, CKDPQueryRetrieveResponse, CKDPRecordDeleteResponse, CKDPRecordResolveTokenResponse, CKDPRecordRetrieveChangesResponse, CKDPRecordRetrieveResponse, CKDPRecordRetrieveVersionsResponse, CKDPRecordSaveResponse, CKDPResponseOperationHeader, CKDPResponseOperationResult, CKDPSetBadgeCountResponse, CKDPShareAcceptResponse, CKDPShareVettingInitiateResponse, CKDPSubscriptionCreateResponse, CKDPSubscriptionDeleteResponse, CKDPSubscriptionRetrieveResponse, CKDPTokenRegistrationResponse, CKDPTokenUnregistrationResponse, CKDPUpdateMissingAssetStatusResponse, CKDPUserAvailableQuotaResponse, CKDPUserPrivacySettingsBatchLookupResponse, CKDPUserPrivacySettingsResetResponse, CKDPUserPrivacySettingsRetrieveResponse, CKDPUserPrivacySettingsUpdateResponse, CKDPUserQueryResponse, CKDPUserRetrieveResponse, CKDPWebAuthTokenRetrieveResponse, CKDPZoneDeleteResponse, CKDPZoneRetrieveChangesResponse, CKDPZoneRetrieveResponse, CKDPZoneSaveResponse;

__attribute__((visibility("hidden")))
@interface CKDPResponseOperation : PBCodable

{
    CKDPArchiveRecordsResponse *_archiveRecordsResponse;
    CKDPAssetUploadTokenRetrieveResponse *_assetUploadTokenRetrieveResponse;
    CKDPBundlesForContainerResponse *_bundlesForContainerResponse;
    CKDPDeleteContainerResponse *_deleteContainerResponse;
    CKDPFetchArchivedRecordsResponse *_fetchArchivedRecordsResponse;
    CKDPCodeFunctionInvokeResponse *_functionInvokeResponse;
    CKDPResponseOperationHeader *_header;
    CKDPMarkAssetBrokenResponse *_markAssetBrokenResponse;
    CKDPNotificationMarkReadResponse *_notificationMarkReadResponse;
    CKDPNotificationSyncResponse *_notificationSyncResponse;
    unsigned int _operationCost;
    CKDPQueryRetrieveResponse *_queryRetrieveResponse;
    CKDPRecordDeleteResponse *_recordDeleteResponse;
    CKDPRecordResolveTokenResponse *_recordResolveTokenResponse;
    CKDPRecordRetrieveChangesResponse *_recordRetrieveChangesResponse;
    CKDPRecordRetrieveResponse *_recordRetrieveResponse;
    CKDPRecordRetrieveVersionsResponse *_recordRetrieveVersionsResponse;
    CKDPRecordSaveResponse *_recordSaveResponse;
    CKDPOperation *_response;
    CKDPResponseOperationResult *_result;
    CKDPSetBadgeCountResponse *_setBadgeCountResponse;
    CKDPShareAcceptResponse *_shareAcceptResponse;
    CKDPShareVettingInitiateResponse *_shareVettingInitiateResponse;
    CKDPSubscriptionCreateResponse *_subscriptionCreateResponse;
    CKDPSubscriptionDeleteResponse *_subscriptionDeleteResponse;
    CKDPSubscriptionRetrieveResponse *_subscriptionRetrieveResponse;
    CKDPTokenRegistrationResponse *_tokenRegistrationResponse;
    CKDPTokenUnregistrationResponse *_tokenUnregistrationResponse;
    CKDPUpdateMissingAssetStatusResponse *_updateMissingAssetStatusResponse;
    CKDPUserAvailableQuotaResponse *_userAvailableQuotaResponse;
    CKDPUserPrivacySettingsBatchLookupResponse *_userPrivacySettingsBatchLookupResponse;
    CKDPUserPrivacySettingsResetResponse *_userPrivacySettingsResetResponse;
    CKDPUserPrivacySettingsRetrieveResponse *_userPrivacySettingsRetrieveResponse;
    CKDPUserPrivacySettingsUpdateResponse *_userPrivacySettingsUpdateResponse;
    CKDPUserQueryResponse *_userQueryResponse;
    CKDPUserRetrieveResponse *_userRetrieveResponse;
    CKDPWebAuthTokenRetrieveResponse *_webAuthTokenRetrieveResponse;
    CKDPZoneDeleteResponse *_zoneDeleteResponse;
    CKDPZoneRetrieveChangesResponse *_zoneRetrieveChangesResponse;
    CKDPZoneRetrieveResponse *_zoneRetrieveResponse;
    CKDPZoneSaveResponse *_zoneSaveResponse;
    struct {
        unsigned int operationCost:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasShareVettingInitiateResponse;
@property (retain, nonatomic) CKDPShareVettingInitiateResponse *shareVettingInitiateResponse;
@property (nonatomic, readonly) _Bool hasZoneSaveResponse;
@property (retain, nonatomic) CKDPZoneSaveResponse *zoneSaveResponse;
@property (nonatomic, readonly) _Bool hasZoneRetrieveResponse;
@property (retain, nonatomic) CKDPZoneRetrieveResponse *zoneRetrieveResponse;
@property (nonatomic, readonly) _Bool hasZoneDeleteResponse;
@property (retain, nonatomic) CKDPZoneDeleteResponse *zoneDeleteResponse;
@property (nonatomic, readonly) _Bool hasZoneRetrieveChangesResponse;
@property (retain, nonatomic) CKDPZoneRetrieveChangesResponse *zoneRetrieveChangesResponse;
@property (nonatomic, readonly) _Bool hasRecordSaveResponse;
@property (retain, nonatomic) CKDPRecordSaveResponse *recordSaveResponse;
@property (nonatomic, readonly) _Bool hasRecordRetrieveResponse;
@property (retain, nonatomic) CKDPRecordRetrieveResponse *recordRetrieveResponse;
@property (nonatomic, readonly) _Bool hasRecordRetrieveVersionsResponse;
@property (retain, nonatomic) CKDPRecordRetrieveVersionsResponse *recordRetrieveVersionsResponse;
@property (nonatomic, readonly) _Bool hasRecordRetrieveChangesResponse;
@property (retain, nonatomic) CKDPRecordRetrieveChangesResponse *recordRetrieveChangesResponse;
@property (nonatomic, readonly) _Bool hasRecordDeleteResponse;
@property (retain, nonatomic) CKDPRecordDeleteResponse *recordDeleteResponse;
@property (nonatomic, readonly) _Bool hasRecordResolveTokenResponse;
@property (retain, nonatomic) CKDPRecordResolveTokenResponse *recordResolveTokenResponse;
@property (nonatomic, readonly) _Bool hasFetchArchivedRecordsResponse;
@property (retain, nonatomic) CKDPFetchArchivedRecordsResponse *fetchArchivedRecordsResponse;
@property (nonatomic, readonly) _Bool hasUserAvailableQuotaResponse;
@property (retain, nonatomic) CKDPUserAvailableQuotaResponse *userAvailableQuotaResponse;
@property (nonatomic, readonly) _Bool hasUserRetrieveResponse;
@property (retain, nonatomic) CKDPUserRetrieveResponse *userRetrieveResponse;
@property (nonatomic, readonly) _Bool hasQueryRetrieveResponse;
@property (retain, nonatomic) CKDPQueryRetrieveResponse *queryRetrieveResponse;
@property (nonatomic, readonly) _Bool hasAssetUploadTokenRetrieveResponse;
@property (retain, nonatomic) CKDPAssetUploadTokenRetrieveResponse *assetUploadTokenRetrieveResponse;
@property (nonatomic, readonly) _Bool hasDeleteContainerResponse;
@property (retain, nonatomic) CKDPDeleteContainerResponse *deleteContainerResponse;
@property (nonatomic, readonly) _Bool hasBundlesForContainerResponse;
@property (retain, nonatomic) CKDPBundlesForContainerResponse *bundlesForContainerResponse;
@property (nonatomic, readonly) _Bool hasWebAuthTokenRetrieveResponse;
@property (retain, nonatomic) CKDPWebAuthTokenRetrieveResponse *webAuthTokenRetrieveResponse;
@property (nonatomic, readonly) _Bool hasUpdateMissingAssetStatusResponse;
@property (retain, nonatomic) CKDPUpdateMissingAssetStatusResponse *updateMissingAssetStatusResponse;
@property (nonatomic, readonly) _Bool hasShareAcceptResponse;
@property (retain, nonatomic) CKDPShareAcceptResponse *shareAcceptResponse;
@property (nonatomic, readonly) _Bool hasFunctionInvokeResponse;
@property (retain, nonatomic) CKDPCodeFunctionInvokeResponse *functionInvokeResponse;
@property (nonatomic, readonly) _Bool hasSubscriptionCreateResponse;
@property (retain, nonatomic) CKDPSubscriptionCreateResponse *subscriptionCreateResponse;
@property (nonatomic, readonly) _Bool hasSubscriptionRetrieveResponse;
@property (retain, nonatomic) CKDPSubscriptionRetrieveResponse *subscriptionRetrieveResponse;
@property (nonatomic, readonly) _Bool hasSubscriptionDeleteResponse;
@property (retain, nonatomic) CKDPSubscriptionDeleteResponse *subscriptionDeleteResponse;
@property (nonatomic, readonly) _Bool hasArchiveRecordsResponse;
@property (retain, nonatomic) CKDPArchiveRecordsResponse *archiveRecordsResponse;
@property (nonatomic, readonly) _Bool hasMarkAssetBrokenResponse;
@property (retain, nonatomic) CKDPMarkAssetBrokenResponse *markAssetBrokenResponse;
@property (nonatomic, readonly) _Bool hasUserQueryResponse;
@property (retain, nonatomic) CKDPUserQueryResponse *userQueryResponse;
@property (nonatomic, readonly) _Bool hasUserPrivacySettingsUpdateResponse;
@property (retain, nonatomic) CKDPUserPrivacySettingsUpdateResponse *userPrivacySettingsUpdateResponse;
@property (nonatomic, readonly) _Bool hasUserPrivacySettingsResetResponse;
@property (retain, nonatomic) CKDPUserPrivacySettingsResetResponse *userPrivacySettingsResetResponse;
@property (nonatomic, readonly) _Bool hasUserPrivacySettingsBatchLookupResponse;
@property (retain, nonatomic) CKDPUserPrivacySettingsBatchLookupResponse *userPrivacySettingsBatchLookupResponse;
@property (nonatomic, readonly) _Bool hasUserPrivacySettingsRetrieveResponse;
@property (retain, nonatomic) CKDPUserPrivacySettingsRetrieveResponse *userPrivacySettingsRetrieveResponse;
@property (nonatomic, readonly) _Bool hasTokenRegistrationResponse;
@property (retain, nonatomic) CKDPTokenRegistrationResponse *tokenRegistrationResponse;
@property (nonatomic, readonly) _Bool hasTokenUnregistrationResponse;
@property (retain, nonatomic) CKDPTokenUnregistrationResponse *tokenUnregistrationResponse;
@property (nonatomic, readonly) _Bool hasSetBadgeCountResponse;
@property (retain, nonatomic) CKDPSetBadgeCountResponse *setBadgeCountResponse;
@property (nonatomic, readonly) _Bool hasNotificationSyncResponse;
@property (retain, nonatomic) CKDPNotificationSyncResponse *notificationSyncResponse;
@property (nonatomic, readonly) _Bool hasNotificationMarkReadResponse;
@property (retain, nonatomic) CKDPNotificationMarkReadResponse *notificationMarkReadResponse;
@property (nonatomic) _Bool hasOperationCost;
@property (nonatomic) unsigned int operationCost;
@property (nonatomic, readonly) _Bool hasResponse;
@property (retain, nonatomic) CKDPOperation *response;
@property (nonatomic, readonly) _Bool hasResult;
@property (retain, nonatomic) CKDPResponseOperationResult *result;
@property (nonatomic, readonly) _Bool hasHeader;
@property (retain, nonatomic) CKDPResponseOperationHeader *header;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
