/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class CKQuery, CKRecordZone, NSArray, NSMutableArray, NSString;

@interface PDCloudStoreRecordsRequest : NSObject

{
    _Bool _storeChangesInDatabase;
    _Bool _returnRecords;
    _Bool _useLastChangeToken;
    _Bool _shouldSaveToken;
    NSString *_groupName;
    NSString *_groupNameSuffix;
    long long _qualityOfService;
    unsigned long long _requestType;
    CKRecordZone *_zone;
    CKQuery *_ckQuery;
    NSArray *_recordsToSave;
    NSArray *_recordIDs;
    NSMutableArray *_completionHandlers;
}

@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (nonatomic) _Bool storeChangesInDatabase;
@property (nonatomic) _Bool returnRecords;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *groupNameSuffix;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) _Bool useLastChangeToken;
@property (nonatomic) _Bool shouldSaveToken;
@property (retain, nonatomic) CKRecordZone *zone;
@property (retain, nonatomic) CKQuery *ckQuery;
@property (retain, nonatomic) NSArray *recordsToSave;
@property (retain, nonatomic) NSArray *recordIDs;

- (id)description;
- (id)initWithRequestType:(unsigned long long)arg1 storeChanges:(_Bool)arg2 returnRecords:(_Bool)arg3 qualityOfService:(long long)arg4 groupName:(id)arg5 groupNameSuffix:(id)arg6;

@end
