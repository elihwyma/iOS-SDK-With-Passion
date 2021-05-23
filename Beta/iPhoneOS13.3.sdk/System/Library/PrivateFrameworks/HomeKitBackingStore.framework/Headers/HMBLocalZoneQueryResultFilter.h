/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBLocalZoneQueryResultRecordID.h>

@class HMBLocalSQLQueryTableQueryAll, NSArray;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultFilter : HMBLocalZoneQueryResultRecordID

{
    HMBLocalSQLQueryTableQueryAll *_query;
    NSArray *_columns;
    CDUnknownBlockType _filter;
}

@property (nonatomic, readonly) HMBLocalSQLQueryTableQueryAll *query;
@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly) CDUnknownBlockType filter;

- (id)fetchRowFromStatement:(struct sqlite3_stmt *)arg1 skip:(_Bool *)arg2 updatedSequence:(unsigned long long *)arg3 error:(id *)arg4;
- (id)initWithLocalZone:(id)arg1 statement:(id)arg2 columns:(id)arg3 filter:(CDUnknownBlockType)arg4;

@end
