/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTEventHandler.h>

@class NSString;

@protocol MTMediaActivityEventHandlerDelegate;

@interface MTMediaActivityEventHandler : MTEventHandler

{
    NSString *_defaultEventType;
    NSString *_defaultActionType;
}

@property (retain, nonatomic) NSString *defaultEventType;
@property (retain, nonatomic) NSString *defaultActionType;
@property (weak, nonatomic) id <MTMediaActivityEventHandlerDelegate> delegate;

- (id)eventType;
- (id)actionType;
- (id)knownFields;
- (id)initWithMetricsKit:(id)arg1 defaultEventType:(id)arg2 defaultActionType:(id)arg3;
- (id)eventVersion:(id)arg1;
- (id)metricsDataForStartActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (id)metricsDataForStopActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 startMetricsData:(id)arg5 eventData:(id)arg6;

@end
