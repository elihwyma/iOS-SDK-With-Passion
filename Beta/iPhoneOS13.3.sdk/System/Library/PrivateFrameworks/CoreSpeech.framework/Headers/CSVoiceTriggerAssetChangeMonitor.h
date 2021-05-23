/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@protocol CSVoiceTriggerAssetChangeDelegate, OS_dispatch_queue;

@interface CSVoiceTriggerAssetChangeMonitor : NSObject

{
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSVoiceTriggerAssetChangeDelegate> _delegate;
}

@property (weak, nonatomic) id <CSVoiceTriggerAssetChangeDelegate> delegate;

+ (id)sharedMonitor;

- (id)init;
- (void)startMonitoring;
- (void)notifyVoiceTriggerAssetChanged;

@end
