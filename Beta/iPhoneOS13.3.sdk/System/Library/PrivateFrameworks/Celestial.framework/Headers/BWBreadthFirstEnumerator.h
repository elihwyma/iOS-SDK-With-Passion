/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNodeEnumerator.h>

@class NSMutableArray;

@interface BWBreadthFirstEnumerator : BWNodeEnumerator

{
    NSMutableArray *_queue;
    NSMutableArray *_holdQueue;
}

- (void)dealloc;
- (id)nextObject;
- (void)addChildren:(id)arg1;
- (id)initWithGraph:(id)arg1;

@end
