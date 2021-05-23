/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWDeferredProcessingSourceNode, BWGraph, FigCaptureDeferredProcessingJob, NSString;

@protocol OS_dispatch_queue;

@interface FigCaptureDeferredProcessingEngine : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    BWGraph *_graph;
    _Bool _graphRunning;
    BWDeferredProcessingSourceNode *_sourceNode;
    FigCaptureDeferredProcessingJob *_job;
    _Bool _interactiveQoS;
    long long _graphPrepareDurationNS;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedProcessingEngine;

- (id)init;
- (void)dealloc;
- (void)releaseResources;
- (void)executeJob:(id)arg1;
- (void)graphDidPrepareNodes:(id)arg1;
- (void)graph:(id)arg1 didFinishStartingWithError:(int)arg2;
- (void)_reportCoreAnalyticsDataWithError:(int)arg1 container:(id)arg2;
- (void)_runJob;
- (void)_handleJobCompletion:(int)arg1;
- (void)_prepareGraphForCurrentJob;
- (void)_cleanupFromJob;
- (id)_photoPortType;

@end
