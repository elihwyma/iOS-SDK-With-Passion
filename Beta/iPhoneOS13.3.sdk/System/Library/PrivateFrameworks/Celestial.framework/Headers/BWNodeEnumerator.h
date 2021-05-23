/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSEnumerator.h>

@class BWGraph, NSMutableDictionary;

@interface BWNodeEnumerator : NSEnumerator

{
    BWGraph *_graph;
    unsigned long long _depth;
    NSMutableDictionary *_nodeVisitCountMap;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithGraph:(id)arg1;
- (unsigned long long)_updateVisitedCount:(id)arg1;

@end
