/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKChartCacheFetchOperation.h>

@class HKHealthStore, NSArray;

@interface HKHealthQueryFetchOperation : HKChartCacheFetchOperation

{
    HKHealthStore *_healthStore;
    CDUnknownBlockType _clientCompletion;
    CDUnknownBlockType _fetchOperationManager;
    NSArray *_queries;
}

@property (retain, nonatomic) NSArray *queries;

- (id)initWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)completedWithResults:(id)arg1 error:(id)arg2;
- (void)stopOperation;
- (void)startOperationWithCompletion:(CDUnknownBlockType)arg1;

@end
