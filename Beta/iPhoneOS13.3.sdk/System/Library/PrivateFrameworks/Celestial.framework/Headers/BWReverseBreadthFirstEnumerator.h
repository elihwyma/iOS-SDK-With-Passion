/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNodeEnumerator.h>

@class NSMutableArray;

@interface BWReverseBreadthFirstEnumerator : BWNodeEnumerator

{
    NSMutableArray *_queue;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithGraph:(id)arg1;

@end
