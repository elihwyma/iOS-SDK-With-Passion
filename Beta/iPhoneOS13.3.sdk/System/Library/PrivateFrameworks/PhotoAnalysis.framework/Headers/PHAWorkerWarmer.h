/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, PHAJobConstraints, PHAWorker;

@interface PHAWorkerWarmer : NSObject

{
    NSMutableSet *_workers;
    PHAWorker *_lastActiveWorker;
    PHAJobConstraints *_lastConstraints;
}

@property (nonatomic, readonly) NSMutableSet *workers;
@property (retain, nonatomic) PHAWorker *lastActiveWorker;
@property (retain, nonatomic) PHAJobConstraints *lastConstraints;

+ (unsigned long long)stateCode;

- (id)init;
- (id)statusAsDictionary;
- (void)_warmupWorkerIfCooled:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2;
- (_Bool)_cooldownWorkerIfWarmed:(id)arg1;
- (void)recordConstraintChange:(id)arg1;
- (void)setActiveWorker:(id)arg1 withJob:(id)arg2;
- (void)reportNoMoreJobsExpected;

@end
