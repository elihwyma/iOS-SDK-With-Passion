/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTObject.h>

@class MTEnvironment, MTEventRecorder;

@protocol MTEventFilter;

@interface MTSystem : MTObject

{
    MTEnvironment *_environment;
    MTEventRecorder *_eventRecorder;
    id <MTEventFilter> _eventFilter;
}

@property (retain, nonatomic) MTEnvironment *environment;
@property (retain, nonatomic) MTEventRecorder *eventRecorder;
@property (retain, nonatomic) id <MTEventFilter> eventFilter;

- (id)initWithMetricsKit:(id)arg1;
- (void)setEventFilterWithJavaScriptFunction:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;

@end
