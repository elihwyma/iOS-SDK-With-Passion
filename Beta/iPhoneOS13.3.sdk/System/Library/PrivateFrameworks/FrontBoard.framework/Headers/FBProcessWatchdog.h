/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoardServices/FBSProcessWatchdog.h>

@class FBProcessWatchdogEventContext;

@interface FBProcessWatchdog : FBSProcessWatchdog

{
    long long _event;
    FBProcessWatchdogEventContext *_eventContext;
}

@property (nonatomic, readonly) long long event;
@property (retain, nonatomic, readonly) FBProcessWatchdogEventContext *eventContext;

- (id)initWithProcess:(id)arg1 context:(id)arg2 policy:(id)arg3;

@end
