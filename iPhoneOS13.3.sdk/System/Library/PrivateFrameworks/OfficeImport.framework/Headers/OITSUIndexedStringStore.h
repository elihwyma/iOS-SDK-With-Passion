//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUIndexedStringStore : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_indexByString;
    NSMutableArray *_stringByIndex;
}

- (NSUInteger)count;
- (id)stringForIndex:(NSUInteger)arg1;
- (NSUInteger)indexForString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

