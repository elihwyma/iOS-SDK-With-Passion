/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPArchiveRecordsRequest, CKDPAssetUploadTokenRetrieveRequest, CKDPBundlesForContainerRequest, CKDPCodeFunctionInvokeRequest, CKDPDeleteContainerRequest, CKDPFetchArchivedRecordsRequest, CKDPMarkAssetBrokenRequest, CKDPNotificationMarkReadRequest, CKDPNotificationSyncRequest, CKDPOperation, CKDPQueryRetrieveRequest, CKDPRecordDeleteRequest, CKDPRecordResolveTokenRequest, CKDPRecordRetrieveChangesRequest, CKDPRecordRetrieveRequest, CKDPRecordRetrieveVersionsRequest, CKDPRecordSaveRequest, CKDPRequestOperationHeader, CKDPSetBadgeCountRequest, CKDPShareAcceptRequest, CKDPShareVettingInitiateRequest, CKDPSubscriptionCreateRequest, CKDPSubscriptionDeleteRequest, CKDPSubscriptionRetrieveRequest, CKDPTokenRegistrationRequest, CKDPTokenUnregistrationRequest, CKDPUpdateMissingAssetStatusRequest, CKDPUserAvailableQuotaRequest, CKDPUserPrivacySettingsBatchLookupRequest, CKDPUserPrivacySettingsResetRequest, CKDPUserPrivacySettingsRetrieveRequest, CKDPUserPrivacySettingsUpdateRequest, CKDPUserQueryRequest, CKDPUserRetrieveRequest, CKDPWebAuthTokenRetrieveRequest, CKDPZoneDeleteRequest, CKDPZoneRetrieveChangesRequest, CKDPZoneRetrieveRequest, CKDPZoneSaveRequest;

@interface CKDPRequestOperation : PBCodable

{
    CKDPArchiveRecordsRequest *_archiveRecordsRequest;
    CKDPAssetUploadTokenRetrieveRequest *_assetUploadTokenRetrieveRequest;
    CKDPBundlesForContainerRequest *_bundlesForContainerRequest;
    CKDPDeleteContainerRequest *_deleteContainerRequest;
    CKDPFetchArchivedRecordsRequest *_fetchArchivedRecordsRequest;
    CKDPCodeFunctionInvokeRequest *_functionInvokeRequest;
    CKDPRequestOperationHeader *_header;
    CKDPMarkAssetBrokenRequest *_markAssetBrokenRequest;
    CKDPNotificationMarkReadRequest *_notificationMarkReadRequest;
    CKDPNotificationSyncRequest *_notificationSyncRequest;
    CKDPQueryRetrieveRequest *_queryRetrieveRequest;
    CKDPRecordDeleteRequest *_recordDeleteRequest;
    CKDPRecordResolveTokenRequest *_recordResolveTokenRequest;
    CKDPRecordRetrieveChangesRequest *_recordRetrieveChangesRequest;
    CKDPRecordRetrieveRequest *_recordRetrieveRequest;
    CKDPRecordRetrieveVersionsRequest *_recordRetrieveVersionsRequest;
    CKDPRecordSaveRequest *_recordSaveRequest;
    CKDPOperation *_request;
    CKDPSetBadgeCountRequest *_setBadgeCountRequest;
    CKDPShareAcceptRequest *_shareAcceptRequest;
    CKDPShareVettingInitiateRequest *_shareVettingInitiateRequest;
    CKDPSubscriptionCreateRequest *_subscriptionCreateRequest;
    CKDPSubscriptionDeleteRequest *_subscriptionDeleteRequest;
    CKDPSubscriptionRetrieveRequest *_subscriptionRetrieveRequest;
    CKDPTokenRegistrationRequest *_tokenRegistrationRequest;
    CKDPTokenUnregistrationRequest *_tokenUnregistrationRequest;
    CKDPUpdateMissingAssetStatusRequest *_updateMissingAssetStatusRequest;
    CKDPUserAvailableQuotaRequest *_userAvailableQuotaRequest;
    CKDPUserPrivacySettingsBatchLookupRequest *_userPrivacySettingsBatchLookupRequest;
    CKDPUserPrivacySettingsResetRequest *_userPrivacySettingsResetRequest;
    CKDPUserPrivacySettingsRetrieveRequest *_userPrivacySettingsRetrieveRequest;
    CKDPUserPrivacySettingsUpdateRequest *_userPrivacySettingsUpdateRequest;
    CKDPUserQueryRequest *_userQueryRequest;
    CKDPUserRetrieveRequest *_userRetrieveRequest;
    CKDPWebAuthTokenRetrieveRequest *_webAuthTokenRetrieveRequest;
    CKDPZoneDeleteRequest *_zoneDeleteRequest;
    CKDPZoneRetrieveChangesRequest *_zoneRetrieveChangesRequest;
    CKDPZoneRetrieveRequest *_zoneRetrieveRequest;
    CKDPZoneSaveRequest *_zoneSaveRequest;
}

@property (nonatomic, readonly) _Bool hasShareVettingInitiateRequest;
@property (retain, nonatomic) CKDPShareVettingInitiateRequest *shareVettingInitiateRequest;
@property (nonatomic, readonly) _Bool hasZoneSaveRequest;
@property (retain, nonatomic) CKDPZoneSaveRequest *zoneSaveRequest;
@property (nonatomic, readonly) _Bool hasZoneRetrieveRequest;
@property (retain, nonatomic) CKDPZoneRetrieveRequest *zoneRetrieveRequest;
@property (nonatomic, readonly) _Bool hasZoneDeleteRequest;
@property (retain, nonatomic) CKDPZoneDeleteRequest *zoneDeleteRequest;
@property (nonatomic, readonly) _Bool hasZoneRetrieveChangesRequest;
@property (retain, nonatomic) CKDPZoneRetrieveChangesRequest *zoneRetrieveChangesRequest;
@property (nonatomic, readonly) _Bool hasRecordSaveRequest;
@property (retain, nonatomic) CKDPRecordSaveRequest *recordSaveRequest;
@property (nonatomic, readonly) _Bool hasRecordRetrieveRequest;
@property (retain, nonatomic) CKDPRecordRetrieveRequest *recordRetrieveRequest;
@property (nonatomic, readonly) _Bool hasRecordRetrieveVersionsRequest;
@property (retain, nonatomic) CKDPRecordRetrieveVersionsRequest *recordRetrieveVersionsRequest;
@property (nonatomic, readonly) _Bool hasRecordRetrieveChangesRequest;
@property (retain, nonatomic) CKDPRecordRetrieveChangesRequest *recordRetrieveChangesRequest;
@property (nonatomic, readonly) _Bool hasRecordDeleteRequest;
@property (retain, nonatomic) CKDPRecordDeleteRequest *recordDeleteRequest;
@property (nonatomic, readonly) _Bool hasRecordResolveTokenRequest;
@property (retain, nonatomic) CKDPRecordResolveTokenRequest *recordResolveTokenRequest;
@property (nonatomic, readonly) _Bool hasFetchArchivedRecordsRequest;
@property (retain, nonatomic) CKDPFetchArchivedRecordsRequest *fetchArchivedRecordsRequest;
@property (nonatomic, readonly) _Bool hasUserAvailableQuotaRequest;
@property (retain, nonatomic) CKDPUserAvailableQuotaRequest *userAvailableQuotaRequest;
@property (nonatomic, readonly) _Bool hasUserRetrieveRequest;
@property (retain, nonatomic) CKDPUserRetrieveRequest *userRetrieveRequest;
@property (nonatomic, readonly) _Bool hasQueryRetrieveRequest;
@property (retain, nonatomic) CKDPQueryRetrieveRequest *queryRetrieveRequest;
@property (nonatomic, readonly) _Bool hasAssetUploadTokenRetrieveRequest;
@property (retain, nonatomic) CKDPAssetUploadTokenRetrieveRequest *assetUploadTokenRetrieveRequest;
@property (nonatomic, readonly) _Bool hasDeleteContainerRequest;
@property (retain, nonatomic) CKDPDeleteContainerRequest *deleteContainerRequest;
@property (nonatomic, readonly) _Bool hasBundlesForContainerRequest;
@property (retain, nonatomic) CKDPBundlesForContainerRequest *bundlesForContainerRequest;
@property (nonatomic, readonly) _Bool hasWebAuthTokenRetrieveRequest;
@property (retain, nonatomic) CKDPWebAuthTokenRetrieveRequest *webAuthTokenRetrieveRequest;
@property (nonatomic, readonly) _Bool hasUpdateMissingAssetStatusRequest;
@property (retain, nonatomic) CKDPUpdateMissingAssetStatusRequest *updateMissingAssetStatusRequest;
@property (nonatomic, readonly) _Bool hasShareAcceptRequest;
@property (retain, nonatomic) CKDPShareAcceptRequest *shareAcceptRequest;
@property (nonatomic, readonly) _Bool hasFunctionInvokeRequest;
@property (retain, nonatomic) CKDPCodeFunctionInvokeRequest *functionInvokeRequest;
@property (nonatomic, readonly) _Bool hasSubscriptionCreateRequest;
@property (retain, nonatomic) CKDPSubscriptionCreateRequest *subscriptionCreateRequest;
@property (nonatomic, readonly) _Bool hasSubscriptionRetrieveRequest;
@property (retain, nonatomic) CKDPSubscriptionRetrieveRequest *subscriptionRetrieveRequest;
@property (nonatomic, readonly) _Bool hasSubscriptionDeleteRequest;
@property (retain, nonatomic) CKDPSubscriptionDeleteRequest *subscriptionDeleteRequest;
@property (nonatomic, readonly) _Bool hasArchiveRecordsRequest;
@property (retain, nonatomic) CKDPArchiveRecordsRequest *archiveRecordsRequest;
@property (nonatomic, readonly) _Bool hasMarkAssetBrokenRequest;
@property (retain, nonatomic) CKDPMarkAssetBrokenRequest *markAssetBrokenRequest;
@property (nonatomic, readonly) _Bool hasUserQueryRequest;
@property (retain, nonatomic) CKDPUserQueryRequest *userQueryRequest;
@property (nonatomic, readonly) _Bool hasUserPrivacySettingsUpdateRequest;
@property (retain, nonatomic) CKDPUserPrivacySettingsUpdateRequest *userPrivacySettingsUpdateRequest;
@property (nonatomic, readonly) _Bool hasUserPrivacySettingsResetRequest;
@property (retain, nonatomic) CKDPUserPrivacySettingsResetRequest *userPrivacySettingsResetRequest;
@property (nonatomic, readonly) _Bool hasUserPrivacySettingsBatchLookupRequest;
@property (retain, nonatomic) CKDPUserPrivacySettingsBatchLookupRequest *userPrivacySettingsBatchLookupRequest;
@property (nonatomic, readonly) _Bool hasUserPrivacySettingsRetrieveRequest;
@property (retain, nonatomic) CKDPUserPrivacySettingsRetrieveRequest *userPrivacySettingsRetrieveRequest;
@property (nonatomic, readonly) _Bool hasTokenRegistrationRequest;
@property (retain, nonatomic) CKDPTokenRegistrationRequest *tokenRegistrationRequest;
@property (nonatomic, readonly) _Bool hasTokenUnregistrationRequest;
@property (retain, nonatomic) CKDPTokenUnregistrationRequest *tokenUnregistrationRequest;
@property (nonatomic, readonly) _Bool hasSetBadgeCountRequest;
@property (retain, nonatomic) CKDPSetBadgeCountRequest *setBadgeCountRequest;
@property (nonatomic, readonly) _Bool hasNotificationSyncRequest;
@property (retain, nonatomic) CKDPNotificationSyncRequest *notificationSyncRequest;
@property (nonatomic, readonly) _Bool hasNotificationMarkReadRequest;
@property (retain, nonatomic) CKDPNotificationMarkReadRequest *notificationMarkReadRequest;
@property (nonatomic, readonly) _Bool hasHeader;
@property (retain, nonatomic) CKDPRequestOperationHeader *header;
@property (nonatomic, readonly) _Bool hasRequest;
@property (retain, nonatomic) CKDPOperation *request;

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
