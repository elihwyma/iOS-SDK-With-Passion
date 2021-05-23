/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_source;

@interface WFDispatchSourceTimer : NSObject

{
    NSObject<OS_dispatch_source> *_source;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_source> *source;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (_Bool)isCancelled;
- (id)initWithInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithInterval:(double)arg1 repeatInterval:(double)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithInterval:(double)arg1 repeatIntervalInt:(unsigned long long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end
