/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSPolicy.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface CSSmartSiriVolumeEnablePolicy : CSPolicy

{
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addSmartSiriVolumeEnabledConditions;

@end
