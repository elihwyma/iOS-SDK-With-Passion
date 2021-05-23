/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RETrainingContext.h>

@class NSMutableArray, RERemoteTrainingServer;

@interface RERemoteTrainingContext : RETrainingContext

{
    NSMutableArray *_trainingElements;
    NSMutableArray *_trainingEvents;
    NSMutableArray *_trainingInteractions;
    RERemoteTrainingServer *_trainingServer;
}

- (void)becomeCurrent;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (_Bool)isCurrent;
- (void)trainWithElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;
- (void)_willSetAttributeForRemoteTraining;
- (void)_queue_setRemoteAttribute:(id)arg1 forKey:(id)arg2;
- (void)_willPerformRemoteTraining;
- (void)_didPerformRemoteTraining;
- (void)_didSetAttributeForRemoteTraining;
- (id)initWithProcessName:(id)arg1;
- (void)_queue_enqueueRemoteTrainingForElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;
- (void)_queue_performRemoteTraining;
- (void)trainWithPredictionElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;

@end
