//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, PHAJobConstraints, PHAWorker;

@interface PHAWorkerWarmer : NSObject
{
    NSMutableSet *_workers;
    PHAWorker *_lastActiveWorker;
    PHAJobConstraints *_lastConstraints;
}

+ (NSUInteger)stateCode;
@property(retain, nonatomic) PHAJobConstraints *lastConstraints; // @synthesize lastConstraints=_lastConstraints;
@property(retain, nonatomic) PHAWorker *lastActiveWorker; // @synthesize lastActiveWorker=_lastActiveWorker;
@property(readonly, nonatomic) NSMutableSet *workers; // @synthesize workers=_workers;
// - (void).cxx_destruct;
- (void)reportNoMoreJobsExpected;
- (void)setActiveWorker:(id)arg1 withJob:(id)arg2;
- (void)recordConstraintChange:(id)arg1;
- (id)init;
- (id)statusAsDictionary;
- (BOOL)_cooldownWorkerIfWarmed:(id)arg1;
- (void)_warmupWorkerIfCooled:(id)arg1 withProgressBlock:(id /* CDUnknownBlockType */)arg2;

@end

