//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface XPCClientUser : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    id /* CDUnknownBlockType */ block;
    int _eventLogLevel;
}

@property(nonatomic) int eventLogLevel; // @synthesize eventLogLevel=_eventLogLevel;
@property(copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue;
- (void)dealloc;
- (id)init;

@end

