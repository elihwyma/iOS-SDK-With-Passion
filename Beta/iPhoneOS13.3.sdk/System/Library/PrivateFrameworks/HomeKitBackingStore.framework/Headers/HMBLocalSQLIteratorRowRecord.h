/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBSQLQueryIterator.h>

__attribute__((visibility("hidden")))
@interface HMBLocalSQLIteratorRowRecord : HMBSQLQueryIterator

{
    int _zoneRowBindOffset;
    unsigned long long _returning;
    unsigned long long _zoneRow;
}

@property (nonatomic, readonly) unsigned long long returning;
@property (nonatomic, readonly) unsigned long long zoneRow;
@property (nonatomic, readonly) int zoneRowBindOffset;

- (id)fetchRowFromStatement:(struct sqlite3_stmt *)arg1 skip:(_Bool *)arg2 updatedSequence:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (id)initWithSQLContext:(id)arg1 zoneRow:(unsigned long long)arg2 returning:(unsigned long long)arg3;

@end
