//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface BLTClientReplyTimeoutManager : NSObject
{
    PCPersistentTimer *_clientReplyTimeoutTimer;
    NSMutableArray *_clientReplyTimeouts;
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (id)addClientReplyTimeoutForBulletin:(id)arg1 sectionID:(id)arg2 timeout:(double)arg3 handler:(id /* CDUnknownBlockType */)arg4;
- (void)_sortTimeouts;
- (void)_handleClientReplyTimeout;
- (void)extendClientReplyTimeout:(id)arg1 additionalTime:(NSUInteger)arg2;
- (BOOL)invalidateClientReplyTimeout:(id)arg1;
- (void)_invalidateClientReplyTimer;
- (void)_startClientReplyTimerWithFireDate:(id)arg1;
- (void)_startNextClientReplyTimer;
- (id)initWithQueue:(id)arg1;

@end

