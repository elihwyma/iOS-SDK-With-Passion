/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject

{
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (id)objectEnumerator;
- (_Bool)isEmpty;
- (void)removeAllObjects;
- (void)pushObject:(id)arg1;
- (id)popObject;
- (void)enqueueObject:(id)arg1;
- (id)dequeueObject;
- (id)popObjectRetained;
- (id)dequeueObjectRetained;
- (void)pushArray:(id)arg1;
- (id)topObject;

@end
