/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CKDModifyWebSharingOperation : CKDDatabaseOperation

{
    int _numSaveAttempts;
    CDUnknownBlockType _recordWebSharedBlock;
    CDUnknownBlockType _recordWebUnsharedBlock;
    NSArray *_recordIDsToShare;
    NSArray *_recordIDsToUnshare;
    NSArray *_recordIDsToShareReadWrite;
    NSMutableSet *_fetchedRecordIDs;
    NSMutableDictionary *_recordsToSaveByID;
}

@property (retain, nonatomic) NSArray *recordIDsToShare;
@property (retain, nonatomic) NSArray *recordIDsToUnshare;
@property (retain, nonatomic) NSArray *recordIDsToShareReadWrite;
@property (retain, nonatomic) NSMutableSet *fetchedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordsToSaveByID;
@property (nonatomic) int numSaveAttempts;
@property (copy, nonatomic) CDUnknownBlockType recordWebSharedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordWebUnsharedBlock;

+ (long long)isPredominatelyDownload;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)_fetchRecords;
- (void)_saveRecords;
- (void)_handleRecordSaved:(id)arg1 error:(id)arg2;
- (struct _PCSIdentityData *)_copyShareProtectionFromRecord:(id)arg1 error:(id *)arg2;
- (void)_handleRecordFetched:(id)arg1 recordID:(id)arg2 error:(id)arg3;

@end
