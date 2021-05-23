/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBSQLQueryIterator.h>

@class HMBLocalZone, NSDictionary;

@interface HMBLocalZoneQueryResult : HMBSQLQueryIterator

{
    int _zoneRowBindOffset;
    HMBLocalZone *_localZone;
    unsigned long long _zoneRow;
    NSDictionary *_arguments;
}

@property (nonatomic, readonly) unsigned long long zoneRow;
@property (nonatomic, readonly) int zoneRowBindOffset;
@property (nonatomic, readonly) NSDictionary *arguments;
@property (weak, nonatomic, readonly) HMBLocalZone *localZone;

+ (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 arguments:(id)arg2 zoneBindRowOffset:(int)arg3 zoneRow:(unsigned long long)arg4 error:(id *)arg5;

- (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (id)initWithLocalZone:(id)arg1 statement:(id)arg2 initialSequence:(id)arg3 arguments:(id)arg4 maximumRowsPerSelect:(unsigned long long)arg5;

@end
