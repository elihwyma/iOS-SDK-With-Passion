/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue;

@interface CalAccumulatingQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_tags;
    NSMutableDictionary *_context;
    CDUnknownBlockType _block;
    float _delay;
    _Bool _executionPending;
}

- (void)executeBlock;
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2 delay:(float)arg3;
- (void)updateTags:(id)arg1 withContext:(id)arg2;
- (void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2;
- (void)updateTags:(id)arg1;
- (void)updateTagsAndExecuteBlock:(id)arg1;

@end
