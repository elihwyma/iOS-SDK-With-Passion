//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, RBAssertionManaging;

__attribute__((visibility("hidden")))
@interface RBResourceViolationHandler : NSObject
{
    id <RBAssertionManaging> _assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)startWithAssertionManager:(id)arg1;
- (void)handleMessage:(id)arg1 fromConnection:(id)arg2;
- (void)handleCPUViolationMessage:(id)arg1 fromConnection:(id)arg2;

@end

