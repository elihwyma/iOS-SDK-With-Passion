/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray;

@interface CKRepairZonePCSOperation : CKDatabaseOperation

{
    CDUnknownBlockType _zoneRepairedBlock;
    NSArray *_zoneIDs;
}

@property (retain, nonatomic) NSArray *zoneIDs;
@property (copy, nonatomic) CDUnknownBlockType zoneRepairedBlock;

- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithZoneIDsToRepair:(id)arg1;

@end
