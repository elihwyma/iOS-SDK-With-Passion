/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject

{
    NSMutableArray *_array;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_index;
    unsigned long long _dequeued;
    unsigned long long _dequeuedNotificationCount;
}

@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (void)dequeue:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)addNotification:(id)arg1 asDead:(_Bool)arg2;
- (void)_filterIndex:(id)arg1;
- (void)processDequeueCallbacks;
- (void)addDequeueCallback:(CDUnknownBlockType)arg1;

@end
