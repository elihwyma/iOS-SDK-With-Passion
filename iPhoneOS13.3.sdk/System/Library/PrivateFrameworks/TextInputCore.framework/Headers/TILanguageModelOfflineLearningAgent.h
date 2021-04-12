//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TILanguageModelOfflineLearningTask;
@protocol OS_dispatch_queue;

@interface TILanguageModelOfflineLearningAgent : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TILanguageModelOfflineLearningTask *_currentLearningTask;
}

+ (void)didFinishLearningWithAgent:(id)arg1 task:(id)arg2;
+ (id)contactRecordsForRecipients:(id)arg1;
+ (id)sharedLearningAgent;
@property(retain, nonatomic) TILanguageModelOfflineLearningTask *currentLearningTask; // @synthesize currentLearningTask=_currentLearningTask;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (void)handleRemovalOfLearnedModels;
- (void)performTaskInBackground:(id /* CDUnknownBlockType */)arg1;
- (void)performLearningIfNecessaryWithStrategy:(id)arg1 lastAdaptationTime:(double)arg2;
- (BOOL)continueLearningTaskWithStrategy:(id)arg1;
- (id)init;

@end

