/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ResourceNotifyHandler : NSObject

{
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _port;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)arg1;
+ (_Bool)processOnBatteryOnly;

- (id)init;
- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (void)resouceNotifyEvent:(id)arg1 triggeredBy:(char [33])arg2 pid:(int)arg3 path:(char [1024])arg4 endTime:(struct mach_timespec)arg5 observedValue:(long long)arg6 observationWindow:(long long)arg7 limitValue:(long long)arg8 limitWindow:(long long)arg9 fatal:(_Bool)arg10;
- (void)setupResourceNotifyReceiver;

@end
