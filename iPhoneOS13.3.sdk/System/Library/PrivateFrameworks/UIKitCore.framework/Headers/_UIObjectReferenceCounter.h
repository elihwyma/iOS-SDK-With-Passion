//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface _UIObjectReferenceCounter : NSObject
{
    NSCountedSet *_objectReferences;
}

// - (void).cxx_destruct;
- (id)allObjects;
- (void)decrementReferenceForObject:(id)arg1 invalidationHandler:(id /* CDUnknownBlockType */)arg2;
- (void)incrementReferenceForObject:(id)arg1;
- (id)init;

@end

