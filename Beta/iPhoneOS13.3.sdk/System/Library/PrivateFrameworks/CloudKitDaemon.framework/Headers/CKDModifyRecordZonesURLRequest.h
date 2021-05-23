/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDModifyRecordZonesURLRequest : CKDURLRequest

{
    _Bool _markZonesAsUserPurged;
    NSDate *_lastMissingManateeIdentityErrorDate;
    CDUnknownBlockType _recordZoneModifiedBlock;
    NSArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZoneIDByRequestID;
}

@property (retain, nonatomic) NSArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID;
@property (nonatomic) _Bool markZonesAsUserPurged;
@property (retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDate;
@property (copy, nonatomic) CDUnknownBlockType recordZoneModifiedBlock;

- (int)operationType;
- (id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;

@end
