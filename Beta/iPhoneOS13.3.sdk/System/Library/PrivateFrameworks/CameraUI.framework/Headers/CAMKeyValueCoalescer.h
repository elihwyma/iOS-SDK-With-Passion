/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CAMKeyValueCoalescer : NSObject

{
    double __interval;
    CDUnknownBlockType __handler;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    NSMutableDictionary *__values;
    NSMutableDictionary *__previousValues;
    NSObject<OS_dispatch_queue> *__coalescingQueue;
}

@property (nonatomic, readonly) double _interval;
@property (copy, nonatomic, readonly) CDUnknownBlockType _handler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *coalescingTimer;
@property (nonatomic, readonly) NSMutableDictionary *_values;
@property (nonatomic, readonly) NSMutableDictionary *_previousValues;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_coalescingQueue;

- (void)flush;
- (void)_pushCoalescedValues;
- (id)initWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)coalesceValue:(id)arg1 forKeyPath:(id)arg2;

@end
