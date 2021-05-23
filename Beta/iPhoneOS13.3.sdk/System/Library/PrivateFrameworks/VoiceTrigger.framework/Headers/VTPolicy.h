/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface VTPolicy : NSObject

{
    NSMutableArray *_monitors;
    NSMutableArray *_conditions;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultVoiceTriggerEnablePolicy;

- (id)init;
- (void)dealloc;
- (_Bool)isEnabled;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (void)subscribeEventMonitor:(id)arg1;
- (void)addConditions:(CDUnknownBlockType)arg1;
- (_Bool)_checkAllConditionsEnabled;
- (void)VTEventMonitorDidReceiveEvent:(id)arg1;
- (void)notifyCallback:(_Bool)arg1;

@end
