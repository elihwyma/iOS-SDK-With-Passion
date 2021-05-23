/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDModifyRecordsURLRequest : CKDURLRequest

{
    _Bool _atomic;
    _Bool _markAsParticipantNeedsNewInvitationToken;
    _Bool _oplock;
    _Bool _sendAllFields;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSDictionary *_pluginFieldsForRecordDeletesByID;
    NSArray *_userPublicKeys;
    CDUnknownBlockType _recordPostedBlock;
    NSArray *_records;
    NSArray *_recordIDsToDelete;
    NSData *_clientChangeTokenData;
    NSDictionary *_requestedFieldsByRecordID;
    NSMutableDictionary *_recordIDByRequestID;
    NSMutableDictionary *_recordByRequestID;
}

@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (nonatomic) _Bool oplock;
@property (nonatomic) _Bool sendAllFields;
@property (retain, nonatomic) NSData *clientChangeTokenData;
@property (retain, nonatomic) NSDictionary *requestedFieldsByRecordID;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary *recordByRequestID;
@property (retain, nonatomic) NSDictionary *recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID;
@property (retain, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic) _Bool atomic;
@property (nonatomic) _Bool markAsParticipantNeedsNewInvitationToken;
@property (retain, nonatomic) NSArray *userPublicKeys;
@property (copy, nonatomic) CDUnknownBlockType recordPostedBlock;

- (int)operationType;
- (int)isolationLevel;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (_Bool)allowsAnonymousAccount;
- (id)zoneIDsToLock;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 oplock:(_Bool)arg3 sendAllFields:(_Bool)arg4 clientChangeTokenData:(id)arg5 requestedFieldsByRecordId:(id)arg6;

@end
