//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RBPersonaManager : NSObject
{
    long long _personalID;
    NSMutableDictionary *_cachedPersonaIdentifiers;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

// - (void).cxx_destruct;
- (void)_fetchData;
- (long long)personaIDForManagedPersona:(id)arg1;
- (id)init;

@end
