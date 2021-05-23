/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EFBoundedQueueStrategy : NSObject

{
    CDUnknownBlockType _overflowHandler;
    unsigned long long _capacity;
}

@property (nonatomic, readonly) CDUnknownBlockType overflowHandler;
@property (nonatomic, readonly) unsigned long long capacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *descriptionType;

- (id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;
- (void)enqueueObject:(id)arg1 replaceIfExists:(_Bool)arg2 buffer:(id)arg3;
- (void)dequeueObject:(id)arg1 buffer:(id)arg2;

@end
