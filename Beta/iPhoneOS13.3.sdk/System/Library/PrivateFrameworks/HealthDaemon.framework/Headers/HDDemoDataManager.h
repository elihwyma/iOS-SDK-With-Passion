/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDemoDataGenerator, HDProfile, NSString;

@protocol OS_dispatch_queue;

@interface HDDemoDataManager : NSObject

{
    NSObject<OS_dispatch_queue> *_demoDataQueue;
    HDProfile *_profile;
    HDDemoDataGenerator *_generator;
}

@property (weak, nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HDDemoDataGenerator *generator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProfile:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)_queue_generateDemoDataIfNeeded;

@end
