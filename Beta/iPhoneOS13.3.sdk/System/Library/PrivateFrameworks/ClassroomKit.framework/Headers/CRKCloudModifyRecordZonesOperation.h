/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/CRKCloudOperation.h>

@class NSSet;

@interface CRKCloudModifyRecordZonesOperation : CRKCloudOperation

{
    NSSet *_zonesToSave;
    NSSet *_zoneIdsToDelete;
}

@property (nonatomic, readonly) NSSet *zonesToSave;
@property (nonatomic, readonly) NSSet *zoneIdsToDelete;

- (void)main;
- (id)initWithDatabase:(id)arg1;
- (id)resetOperation;
- (id)initWithDatabase:(id)arg1 zonesToSave:(id)arg2 zoneIdsToDelete:(id)arg3;

@end
