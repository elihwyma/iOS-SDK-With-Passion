/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _CNBoundedQueueingStrategy : NSObject

{
    unsigned long long _capacity;
    CDUnknownBlockType _overflowHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;

@end
