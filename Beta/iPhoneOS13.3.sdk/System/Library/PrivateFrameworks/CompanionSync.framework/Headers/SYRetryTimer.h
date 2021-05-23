/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@protocol OS_dispatch_source;

@interface SYRetryTimer : NSObject

{
    NSObject<OS_dispatch_source> *_timer;
    double _interval;
    double _backoffFactor;
    int _maxRetries;
    int _numRetries;
}

- (void)cancel;
- (id)initWithInterval:(double)arg1 backoffFactor:(double)arg2 maxRetries:(int)arg3 queue:(id)arg4 callout:(CDUnknownBlockType)arg5;
- (_Bool)incrementBackoff;

@end
