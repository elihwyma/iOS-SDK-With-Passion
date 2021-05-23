/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSDate, NSString;

@interface PLArchiveEntry

{
    _Bool _systemTimeOffsetModified;
    NSString *_crPath;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *compressedPath;
@property (nonatomic, readonly) NSString *crPath;
@property (nonatomic, readonly) NSString *name;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) NSString *uuid;
@property (nonatomic) double systemTimeOffset;
@property (readonly) _Bool systemTimeOffsetModified;
@property (readonly) _Bool fullMode;
@property (nonatomic) long long stage;
@property (nonatomic) unsigned long long numAttempts;
@property (retain, nonatomic) NSDate *syncedOffDate;
@property (retain, nonatomic) NSDate *removedDate;
@property (nonatomic) long long mainDBSizeAtStart;
@property (nonatomic, readonly) _Bool syncedOff;
@property (nonatomic, readonly) _Bool removed;

+ (void)load;
+ (id)storageQueue;
+ (id)entryKey;

- (void)log;
- (id)initWithMetadata:(id)arg1;
- (id)initEntryWithRawData:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 andUUID:(id)arg3;

@end
