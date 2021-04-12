//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTTransitionScheduler-Protocol.h>

@interface AVTSynchronousTransitionScheduler : NSObject <AVTTransitionScheduler>
{
    BOOL _isRunningEvent;
    id /* CDUnknownBlockType */ _eventHandler;
}

@property(nonatomic) BOOL isRunningEvent; // @synthesize isRunningEvent=_isRunningEvent;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ eventHandler; // @synthesize eventHandler=_eventHandler;
// - (void).cxx_destruct;
- (void)didCompleteEvent;
- (void)stop;
- (void)scheduleEvent;
- (id)initWithEventHandler:(id /* CDUnknownBlockType */)arg1;

@end

