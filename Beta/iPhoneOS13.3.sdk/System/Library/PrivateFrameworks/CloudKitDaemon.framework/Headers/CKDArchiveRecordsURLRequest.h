/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDArchiveRecordsURLRequest : CKDURLRequest

{
    CDUnknownBlockType _recordArchivedBlock;
    NSMutableDictionary *_zoneIDToRecordIDs;
    NSMutableDictionary *_recordZoneIDByRequestID;
}

@property (retain, nonatomic) NSMutableDictionary *zoneIDToRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID;
@property (copy, nonatomic) CDUnknownBlockType recordArchivedBlock;

- (int)operationType;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)initWithRecordIDsToArchive:(id)arg1;

@end
