/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, REOrderingArray;

@interface REElementQueue : NSObject

{
    REOrderingArray *_relevantElements;
    NSMutableSet *_hiddenElements;
    NSArray *_comparators;
    long long _maximumRelevantElementsCount;
}

@property (copy, nonatomic, readonly) NSArray *comparators;
@property (nonatomic) long long maximumRelevantElementsCount;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long visibleCount;
@property (nonatomic, readonly) NSArray *allElements;

- (id)elementAtIndex:(unsigned long long)arg1;
- (void)removeElement:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (id)initWithMaximumRelevantElementsCount:(long long)arg1 comparators:(id)arg2;
- (void)addElement:(id)arg1 hidden:(_Bool)arg2;
- (void)updatePositionForElement:(id)arg1 hidden:(_Bool)arg2;
- (long long)indexOfElement:(id)arg1;
- (_Bool)containsElement:(id)arg1;
- (void)updateAllElements;

@end
