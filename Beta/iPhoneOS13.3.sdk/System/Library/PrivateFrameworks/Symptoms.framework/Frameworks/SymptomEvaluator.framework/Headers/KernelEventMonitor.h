/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface KernelEventMonitor : NSObject

{
    NSString *_symptomName;
    int _nativeSocket;
    int _nativeSocket6;
    NSObject<OS_dispatch_source> *_kernelNotificationSource;
    NSObject<OS_dispatch_source> *_kernelNotificationSource6;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)arg1;

- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (void)_handleNetworkEvent:(struct kern_event_msg *)arg1;
- (void)_handleSocket:(int)arg1;
- (void)initListening;

@end
