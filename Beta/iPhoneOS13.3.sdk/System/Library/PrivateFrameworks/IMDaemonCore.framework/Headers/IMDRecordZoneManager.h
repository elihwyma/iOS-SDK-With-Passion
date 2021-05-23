/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class APSConnection, CKRecordZone, CKRecordZoneID, IMDCKDatabaseManager, NSString;

@interface IMDRecordZoneManager : NSObject

{
    CKRecordZoneID *_chatRecordZoneID;
    CKRecordZone *_chatRecordZone;
    CKRecordZoneID *_attachmentRecordZoneID;
    CKRecordZone *_attachmentRecordZone;
    CKRecordZoneID *_messageRecordZoneID;
    CKRecordZone *_messageRecordZone;
    CKRecordZoneID *_analyticRecordZoneID;
    CKRecordZone *_analyticRecordZone;
    CKRecordZoneID *_deDupeSaltZoneID;
    CKRecordZone *_deDupeSaltRecordZone;
    CKRecordZoneID *_metricZoneID;
    IMDCKDatabaseManager *_dataBaseManager;
    APSConnection *_pushConnection;
}

@property (retain, nonatomic) IMDCKDatabaseManager *dataBaseManager;
@property (retain, nonatomic) APSConnection *pushConnection;
@property (nonatomic, readonly) CKRecordZoneID *chatRecordZoneID;
@property (nonatomic, readonly) CKRecordZone *chatRecordZone;
@property (nonatomic, readonly) CKRecordZoneID *attachmentRecordZoneID;
@property (nonatomic, readonly) CKRecordZone *attachmentRecordZone;
@property (nonatomic, readonly) CKRecordZoneID *messageRecordZoneID;
@property (nonatomic, readonly) CKRecordZone *messageRecordZone;
@property (nonatomic, readonly) CKRecordZoneID *analyticRecordZoneID;
@property (nonatomic, readonly) CKRecordZone *analyticRecordZone;
@property (nonatomic, readonly) CKRecordZoneID *deDupeSaltZoneID;
@property (nonatomic, readonly) CKRecordZone *deDupeSaltRecordZone;
@property (nonatomic, readonly) CKRecordZoneID *metricZoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)deleteChatZone;
- (void)deleteAttachmentZone;
- (void)deleteAllZones;
- (void)createSubscriptionIfNeededOnDeDupeZoneForSubscription:(id)arg1 recordType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (long long)derivedQualityOfService;
- (void)createDeDupeSaltZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)ckUtilities;
- (void)createAnalyticZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_setUpPushConnection;
- (void)_handleNotificationForZoneID:(id)arg1 subscriptionID:(id)arg2;
- (void)_createSubscriptionForZoneID:(id)arg1 subscriptionID:(id)arg2 recordType:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_createRecordZone:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_checkRecordZoneExists:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_deleteZone:(id)arg1 forDatabase:(id)arg2;
- (void)_createRecordZoneIfNeeded:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_deleteZone:(id)arg1;
- (void)_createSubscriptionIfNeededForZoneID:(id)arg1 subscriptionID:(id)arg2 recordType:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_deleteAllZonesForDatabase:(id)arg1;
- (void)createChatZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)createAttachmentZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)createMessageZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)deleteMessageZone;
- (void)deleteAnalyticZone;
- (void)deleteDeDupeSaltZone;
- (void)fetchChatZoneToCheckManateeStatus:(CDUnknownBlockType)arg1;

@end
