/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <HealthKit/_HKFitnessFriendActivitySnapshot.h>

@class ASCodableCloudKitActivitySnapshot, HKQuantity, NSString;

@interface _HKFitnessFriendActivitySnapshot (CloudKitCodingSupport)

@property (nonatomic, readonly) ASCodableCloudKitActivitySnapshot *codableSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HKQuantity *mmvQuantity;
@property (nonatomic, readonly) HKQuantity *mmgQuantity;

+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2 uploadedDate:(id)arg3;
+ (id)_fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2 uploadedDate:(id)arg3;
+ (struct _HKFitnessFriendActivitySnapshot *)fitnessFriendActivitySnapshotWithRecord:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1;
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2;

- (id)recordWithZoneID:(id)arg1;
- (_Bool)isAmm;
- (double)mmPercent;

@end
