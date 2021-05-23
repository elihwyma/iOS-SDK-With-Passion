/*
 Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface DESRecordSet : NSObject

{
    CDUnknownBlockType _dataFetcher;
    NSDictionary *_nativeRecords;
    NSDictionary *_nativeRecordInfo;
    NSArray *_coreDuetEvents;
    NSDictionary *_predicate;
}

@property (copy, nonatomic, readonly) NSDictionary *nativeRecords;
@property (copy, nonatomic, readonly) NSDictionary *nativeRecordInfo;
@property (copy, nonatomic, readonly) NSArray *coreDuetEvents;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSDictionary *predicate;

- (id)_initWithNativeRecords:(id)arg1 nativeRecordInfo:(id)arg2 coreDuetEvents:(id)arg3 predicate:(id)arg4 dataFetcher:(CDUnknownBlockType)arg5;
- (id)nativeRecordInfoForRecordUUID:(id)arg1;
- (id)nativeRecordDataForRecordUUID:(id)arg1 error:(id *)arg2;
- (id)_anyNativeRecordUUID;
- (id)filteredRecordSetWithJSONPredicate:(id)arg1;

@end
