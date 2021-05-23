/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class NSMutableArray, RETrainingScheduler;

@protocol RETrainingManagerProperties <Swift>

@property (nonatomic, readonly) NSMutableArray *trainingEvents;
@property (nonatomic, readonly) RETrainingScheduler *trainingScheduler;

@end
