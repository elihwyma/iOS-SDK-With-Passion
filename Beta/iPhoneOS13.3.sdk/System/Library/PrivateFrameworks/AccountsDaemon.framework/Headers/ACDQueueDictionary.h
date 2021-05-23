/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ACDQueueDictionary : NSObject

{
    NSMutableDictionary *_allQueuesByID;
}

- (id)init;
- (id)description;
- (_Bool)isEmpty;
- (_Bool)isQueueEmptyForKey:(id)arg1;
- (void)addObject:(id)arg1 toQueueForKey:(id)arg2;
- (id)dequeueFirstObjectInQueueForKey:(id)arg1;
- (id)firstObjectInQueueForKey:(id)arg1;
- (id)dequeueAllObjectsInQueueForKey:(id)arg1;
- (id)keyForRandomQueue;

@end
