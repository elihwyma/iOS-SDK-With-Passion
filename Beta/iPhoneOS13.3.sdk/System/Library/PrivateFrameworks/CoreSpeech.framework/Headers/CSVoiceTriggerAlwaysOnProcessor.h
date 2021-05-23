/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class AVVoiceTriggerClient;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CSVoiceTriggerAlwaysOnProcessor : NSObject

{
    AVVoiceTriggerClient *_alwaysOnProcessorController;
    NSObject<OS_dispatch_group> *_aopSwitchGroup;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)enableVoiceTriggerOnAlwaysOnProcessorWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableVoiceTriggerOnAlwaysOnProcessorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setBuiltInRTModelDictionary:(id)arg1;

@end
