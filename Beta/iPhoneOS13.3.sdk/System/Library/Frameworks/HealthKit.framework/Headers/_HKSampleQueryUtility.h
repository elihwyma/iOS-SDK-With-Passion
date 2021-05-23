/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKAnchoredObjectQuery, HKHealthStore, HKQueryAnchor, HKSampleType, NSMutableArray, NSPredicate;

@interface _HKSampleQueryUtility : NSObject

{
    HKHealthStore *_healthStore;
    HKSampleType *_sampleType;
    NSPredicate *_predicate;
    HKAnchoredObjectQuery *_query;
    HKQueryAnchor *_queryAnchor;
    NSMutableArray *_samples;
    _Bool _sortStartDateAscending;
    CDUnknownBlockType _updateHandler;
}

@property (copy, nonatomic) CDUnknownBlockType updateHandler;
@property (nonatomic) _Bool sortStartDateAscending;

- (id)init;
- (void)stop;
- (void)execute;
- (id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 resultsHandler:(CDUnknownBlockType)arg4;
- (void)setupQueryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 updateHandler:(CDUnknownBlockType)arg5;
- (void)handleAddedObjects:(id)arg1 deletedObjects:(id)arg2 queryAnchor:(id)arg3 error:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
