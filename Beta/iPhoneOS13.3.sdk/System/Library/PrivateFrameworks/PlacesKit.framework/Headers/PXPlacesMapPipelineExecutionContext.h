/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMapTable, NSMutableDictionary, NSMutableSet, PXPlacesMapViewPort;

@interface PXPlacesMapPipelineExecutionContext : NSObject

{
    NSDate *_start;
    NSMutableSet *_dataSources;
    NSMutableDictionary *_timerStartDataSource;
    NSMutableDictionary *_timerStopDataSource;
    NSMutableDictionary *_timerStartPipeline;
    NSMutableDictionary *_timerStopPipeline;
    NSDate *_timerStartPlanResultsExecution;
    NSDate *_timerStopPlanResultsExecution;
    CDUnknownBlockType _completionHandler;
    _Bool _stopped;
    NSArray *_callstack;
    double _duration;
    NSMapTable *_changesForDataSources;
    NSArray *_updatePlanResults;
    PXPlacesMapViewPort *_viewPort;
}

@property (readonly) NSArray *dataSources;
@property (readonly) NSMapTable *changesForDataSources;
@property (readonly) double duration;
@property (retain) NSArray *updatePlanResults;
@property (retain) PXPlacesMapViewPort *viewPort;

- (void)stop;
- (void)start;
- (id)initWithViewPort:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addDataSources:(id)arg1 changesForDataSources:(id)arg2;
- (void)startTimerForDataSource:(id)arg1;
- (void)stopTimerForDataSource:(id)arg1;
- (id)durationForDataSources;
- (void)startTimerForPipeline:(id)arg1;
- (void)stopTimerForPipeline:(id)arg1;
- (id)durationForPipelines;
- (void)startTimerForExecutionOfPlanResults;
- (void)stopTimerForExecutionOfPlanResults;
- (double)durationForExecutionOfPlanResults;

@end
