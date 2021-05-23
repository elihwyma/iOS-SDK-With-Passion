/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface AFOpportuneSpeakingModuleDataCollection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_speakableMap;
}

+ (id)sharedCollector;

- (id)init;
- (void)_deleteSpeakablesOlderThan:(id)arg1;
- (void)logSpeakable:(id)arg1 forContact:(id)arg2 withModelId:(id)arg3 withFeatures:(id)arg4 withScore:(float)arg5;
- (void)logFeedbackOfType:(long long)arg1 forSpeakableId:(id)arg2 withModelId:(id)arg3;
- (void)logRecommendedAction:(id)arg1 forSpeakableId:(id)arg2 withModelId:(id)arg3;
- (void)logInteractionEvents:(id)arg1 forSpeakableId:(id)arg2;

@end
