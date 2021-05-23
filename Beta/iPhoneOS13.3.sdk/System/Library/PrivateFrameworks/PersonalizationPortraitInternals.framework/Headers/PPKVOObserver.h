/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface PPKVOObserver : NSObject

{
    NSString *_name;
    NSString *_key;
    id _observee;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)observerWithName:(id)arg1 object:(id)arg2 key:(id)arg3 handler:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithName:(id)arg1 key:(id)arg2 observee:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end
