//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFMulticaster.h>

@class PFDispatchQueue;

@interface PFAsyncDispatchMulticaster : PFMulticaster
{
    PFDispatchQueue *_sendQueue;
}

+ (void)initialize;
// - (void).cxx_destruct;
- (void)distributeSelector:(SEL)arg1 toReceivers:(id)arg2 distributionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)_distributeAsyncDispatchSelector:(SEL)arg1 to:(id)arg2 distributionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)resume;
- (void)suspend;
- (void)flushMessagesAndNotify:(id /* CDUnknownBlockType */)arg1;
- (id)_defaultDistributionQueue;
- (id)init;

@end

