//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ASReachabilityStatusCache : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_cache;
}

// - (void).cxx_destruct;
- (void)addStatusesByDestination:(id)arg1;
- (void)setStatus:(id)arg1 forDestination:(id)arg2;
- (id)statusesForDestinations:(id)arg1;
- (id)statusForDestination:(id)arg1;
- (id)init;

@end

