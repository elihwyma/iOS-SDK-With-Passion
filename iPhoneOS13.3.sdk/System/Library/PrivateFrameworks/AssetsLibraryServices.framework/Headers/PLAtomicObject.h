//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLAtomicObject : NSObject
{
//     struct os_unfair_lock_s _lock;
    id _object;
}

// - (void).cxx_destruct;
- (void)atomicallyPerformBlockAndWait:(id /* CDUnknownBlockType */)arg1;
- (void)atomicSetObject:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)init;

@end
