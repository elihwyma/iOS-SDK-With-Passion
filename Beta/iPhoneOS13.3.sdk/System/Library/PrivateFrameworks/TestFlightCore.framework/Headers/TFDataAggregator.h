/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class TFFeedbackDataContainer;

@protocol OS_dispatch_queue, TFDataAggregatorDelegate;

__attribute__((visibility("hidden")))
@interface TFDataAggregator : NSObject

{
    TFFeedbackDataContainer *_sessionDataContainer;
    id <TFDataAggregatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_aggregationQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *aggregationQueue;
@property (nonatomic, readonly) TFFeedbackDataContainer *sessionDataContainer;
@property (weak, nonatomic) id <TFDataAggregatorDelegate> delegate;

- (void)_validateProvidedIdentifiersForTasks:(id)arg1;
- (void)_prepareDestinationDataContainer:(id)arg1 forTasks:(id)arg2;
- (id)_loadAndExtractDataForTasks:(id)arg1 intoDataContainer:(id)arg2;
- (void)_finishUpdatingDataContainer:(id)arg1 byMergingDataContainer:(id)arg2 forTasks:(id)arg3;
- (id)initWithSessionDataContainer:(id)arg1;
- (void)runTasks:(id)arg1;

@end
