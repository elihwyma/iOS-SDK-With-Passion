/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAWorkerJob.h>

@class NSObject, NSString, PHAVisionServiceFaceProcessingWorker, PVPersonPromoter;

@protocol OS_dispatch_queue;

@interface PHAPeoplePromoterProcessingJob : PHAWorkerJob

{
    _Bool _finished;
    float _completionScore;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    PVPersonPromoter *_personPromoter;
    PHAVisionServiceFaceProcessingWorker *_worker;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue;
@property (retain, nonatomic) PVPersonPromoter *personPromoter;
@property (weak, nonatomic) PHAVisionServiceFaceProcessingWorker *worker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setFinished:(_Bool)arg1;
- (_Bool)finished;
- (void)setCompletionScore:(float)arg1;
- (float)completionScore;
- (id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(_Bool)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(CDUnknownBlockType)arg4;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;

@end
