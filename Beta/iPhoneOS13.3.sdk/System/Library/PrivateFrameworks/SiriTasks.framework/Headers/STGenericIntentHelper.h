/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface STGenericIntentHelper : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_handlers;
    NSObject<OS_dispatch_queue> *_siriResponseQueue;
    NSObject<OS_dispatch_semaphore> *_waitForIntentCompleteSemaphore;
}

@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *siriResponseQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitForIntentCompleteSemaphore;

+ (id)sharedHelper;

- (id)init;
- (void)_handleIntent:(id)arg1 withTask:(id)arg2 andApplication:(id)arg3;
- (_Bool)_invokeHandlerForIntent:(id)arg1;
- (void)finishedLaunching:(_Bool)arg1;
- (void)handleSiriTask:(id)arg1 withApplication:(id)arg2;
- (void)forIntentParam:(id)arg1 predict:(id)arg2;
- (void)forIntent:(id)arg1 registerHandler:(CDUnknownBlockType)arg2;

@end
