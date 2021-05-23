/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface NSThread : NSObject

{
    id _private;
    unsigned char _bytes[44];
}

@property (retain, readonly) NSMutableDictionary *threadDictionary;
@property double threadPriority;
@property long long qualityOfService;
@property (copy) NSString *name;
@property unsigned long long stackSize;
@property (readonly) _Bool isMainThread;
@property (readonly, getter=isExecuting) _Bool executing;
@property (readonly, getter=isFinished) _Bool finished;
@property (readonly, getter=isCancelled) _Bool cancelled;

+ (id)callStackReturnAddresses;
+ (id)callStackSymbols;
+ (id)currentThread;
+ (double)threadPriority;
+ (_Bool)setThreadPriority:(double)arg1;
+ (_Bool)isDying;
+ (id)mainThread;
+ (_Bool)isMainThread;
+ (_Bool)isMultiThreaded;
+ (void)sleepUntilDate:(id)arg1;
+ (void)sleepForTimeInterval:(double)arg1;
+ (void)exit;
+ (void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;
+ (void)detachNewThreadWithBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)cancel;
- (void)start;
- (void)main;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (_Bool)_setThreadPriority:(double)arg1;
- (_Bool)isDying;
- (id)runLoop;
- (struct pthread_override_s *)_beginQoSOverride:(unsigned int)arg1 relativePriority:(int)arg2;
- (void)_endQoSOverride:(struct pthread_override_s *)arg1;
- (void)_nq:(id)arg1;

@end
