//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTPowerAssertion;
@protocol OS_dispatch_source;

@interface MTGCDTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    MTPowerAssertion *_powerAssertion;
}

// - (void).cxx_destruct;
- (void)cancelTimer;
- (void)startTimer:(double)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;

@end

