/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FMDispatchTimer : NSObject

{
    double _leewayTimeInterval;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completion;
    double _timeout;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic) double leewayTimeInterval;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (id)initWithQueue:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;

@end
