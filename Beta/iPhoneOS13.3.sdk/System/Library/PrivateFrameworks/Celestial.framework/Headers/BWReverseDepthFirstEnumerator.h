/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNodeEnumerator.h>

@class NSMutableArray;

@interface BWReverseDepthFirstEnumerator : BWNodeEnumerator

{
    int _ordering;
    NSMutableArray *_stack;
    unsigned long long _currentSinkIndex;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithGraph:(id)arg1 vertexOrdering:(int)arg2;
- (id)_nextUnvisitedParent:(id)arg1;

@end
