/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface CSPolicy : NSObject

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

- (id)init;
- (void)dealloc;
- (_Bool)isEnabled;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (void)subscribeEventMonitor:(id)arg1;
- (void)addConditions:(CDUnknownBlockType)arg1;
- (_Bool)_checkAllConditionsEnabled;
- (void)notifyCallback:(_Bool)arg1;
- (void)notifyCallback;
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;

@end
