/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFLinkedListItem;

@protocol AFQueueDelegate;

@interface AFQueue : NSObject

{
    AFLinkedListItem *_head;
    AFLinkedListItem *_tail;
    unsigned long long _count;
    id <AFQueueDelegate> _delegate;
}

@property (nonatomic, readonly) id frontObject;
@property (nonatomic, readonly) unsigned long long count;
@property (weak, nonatomic) id <AFQueueDelegate> delegate;

- (void)dealloc;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)_objects;
- (void)enqueueObject:(id)arg1;
- (id)dequeueObject;
- (void)enqueueObjects:(id)arg1;
- (id)dequeueAllObjects;

@end
