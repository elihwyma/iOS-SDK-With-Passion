/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@class NSObject, NSString, SACInfo, SACInfoListener;

@protocol OS_dispatch_queue;

@interface CSSACInfoMonitor : CSEventMonitor

{
    NSObject<OS_dispatch_queue> *_queue;
    SACInfoListener *_infoListener;
    SACInfo *_currentSACInfo;
    _Bool _isDeviceRoleStereo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)handleSACInfo:(id)arg1;
- (_Bool)isDeviceRoleStereo;

@end
