/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBSQLQueryIterator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultAllOfTypeRaw : HMBSQLQueryIterator

{
    int _zoneRowBindOffset;
    int _modelTypeBindOffset;
    unsigned long long _returning;
    unsigned long long _zoneRow;
    NSString *_modelType;
}

@property (nonatomic, readonly) unsigned long long returning;
@property (nonatomic, readonly) unsigned long long zoneRow;
@property (nonatomic, readonly) int zoneRowBindOffset;
@property (nonatomic, readonly) NSString *modelType;
@property (nonatomic, readonly) int modelTypeBindOffset;

- (id)fetchRowFromStatement:(struct sqlite3_stmt *)arg1 skip:(_Bool *)arg2 updatedSequence:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (id)initWithLocalZone:(id)arg1 zoneRow:(unsigned long long)arg2 modelType:(id)arg3 returning:(unsigned long long)arg4;

@end
