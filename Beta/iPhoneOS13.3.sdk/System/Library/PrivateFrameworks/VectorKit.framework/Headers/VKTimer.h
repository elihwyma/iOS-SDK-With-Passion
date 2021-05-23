/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_source;

@interface VKTimer : NSObject

{
    NSObject<OS_dispatch_source> *_source;
    double _nextFireDate;
}

@property (nonatomic, readonly) double nextFireDate;

- (void)dealloc;
- (void)invalidate;
- (void)disable;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 queue:(id)arg3;
- (void)fireAfter:(double)arg1;

@end
