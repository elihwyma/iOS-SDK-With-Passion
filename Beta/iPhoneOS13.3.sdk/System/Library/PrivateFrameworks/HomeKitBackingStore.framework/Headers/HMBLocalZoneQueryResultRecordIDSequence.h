/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBLocalZoneQueryResult.h>

@class NSData, NSMutableSet;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultRecordIDSequence : HMBLocalZoneQueryResult

{
    NSData *_currentSequenceAsData;
    NSData *_lastReturnedSequence;
    NSMutableSet *_returnedIDs;
}

@property (retain, nonatomic) NSData *currentSequenceAsData;
@property (retain, nonatomic) NSData *lastReturnedSequence;
@property (retain, nonatomic) NSMutableSet *returnedIDs;

- (id)nextObject;
- (id)fetchRow:(id)arg1 error:(id *)arg2;
- (id)initWithLocalZone:(id)arg1 statement:(id)arg2 initialSequence:(id)arg3 sequenceBindOffset:(unsigned long long)arg4 arguments:(id)arg5 maximumRowsPerSelect:(unsigned long long)arg6;
- (id)fetchRowFromStatement:(struct sqlite3_stmt *)arg1 skip:(_Bool *)arg2 updatedSequenceColumn:(id *)arg3 error:(id *)arg4;
- (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 currentSequence:(id)arg2 error:(id *)arg3;

@end
