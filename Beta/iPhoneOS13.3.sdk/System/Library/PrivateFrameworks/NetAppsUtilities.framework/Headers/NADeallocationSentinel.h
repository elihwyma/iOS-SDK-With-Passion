/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSObject.h>

@class NADeallocationTracer, NSString;

@interface NADeallocationSentinel : NSObject

{
    id _targetObject;
    CDUnknownBlockType _finalizer;
    NADeallocationTracer *_tracer;
}

@property (nonatomic, readonly) id targetObject;
@property (copy, nonatomic, readonly) CDUnknownBlockType finalizer;
@property (weak, nonatomic, readonly) NADeallocationTracer *tracer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)tracerIsDeallocating;
- (id)initWithTargetObject:(id)arg1 finalizer:(CDUnknownBlockType)arg2;

@end
