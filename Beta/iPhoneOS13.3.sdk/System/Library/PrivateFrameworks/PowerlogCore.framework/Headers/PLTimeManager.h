/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PLSQLiteConnection, PLStorageOperator;

@interface PLTimeManager : NSObject

{
    PLStorageOperator *_storageOperator;
    PLSQLiteConnection *_connection;
    NSDictionary *_timeReferences;
    NSDictionary *_notificationsToTimeReferences;
}

@property (weak) PLSQLiteConnection *connection;
@property (retain) NSDictionary *timeReferences;
@property (retain) NSDictionary *notificationsToTimeReferences;
@property (weak) PLStorageOperator *storageOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)storageQueue;
- (double)timeOffsetForTimeReference:(long long)arg1;
- (id)currentTimeFromTimeReference:(long long)arg1 toTimeReference:(long long)arg2;
- (id)convertTime:(id)arg1 fromTimeReference:(long long)arg2 toTimeReference:(long long)arg3;
- (void)logTimeEntry;
- (void)getBootSessionUUID;
- (id)bucketNSDate:(id)arg1 withBucketInterval:(int)arg2;
- (double)timeZoneHourBucketShift:(double)arg1;
- (double)hourBucketBaseSnapOffsetWithMonotonicTime:(long long)arg1;
- (id)initialMonotonicTime;
- (double)hourBucketBaseSnapOffsetWithMonotonicTimeNow:(long long)arg1;
- (void)initializeTimeOffsets;
- (void)registerForTimeChangedCallbackWithIdentifier:(id)arg1 forTimeReference:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(id)arg1 forTimeReference:(long long)arg2;
- (int)bucketTimeStampForDate:(id)arg1 withTimeReference:(long long)arg2 withBucketInterval:(int)arg3;

@end
