/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDateInterval, NSSet, PGGraph, PGTitle;

@interface PGTitleGeneratorDateMatching : NSObject

{
    _Bool _isForHighlight;
    PGGraph *_graph;
    long long _type;
    NSDateInterval *_referenceDateInterval;
    NSSet *_dateNodes;
    NSSet *_momentNodes;
    unsigned long long _lineBreakBehavior;
}

@property (retain, nonatomic) PGGraph *graph;
@property (retain, nonatomic) NSSet *dateNodes;
@property (nonatomic, readonly) _Bool isForHighlight;
@property (nonatomic, readonly) unsigned long long lineBreakBehavior;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) PGTitle *title;
@property (nonatomic, readonly) unsigned long long allowedTimeTitleFormats;
@property (nonatomic, readonly) NSDateInterval *referenceDateInterval;
@property (nonatomic, readonly) NSSet *momentNodes;

+ (id)_typeMatchings;
+ (_Bool)type:(long long)arg1 isBetterThanType:(long long)arg2;

- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 momentNodes:(id)arg3 lineBreakBehavior:(unsigned long long)arg4 isForHighlight:(_Bool)arg5;
- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 highlightNode:(id)arg3;
- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 momentNodes:(id)arg3;
- (_Bool)_dateNodeIntersectsWithReferenceDateIntervalByIgnoringYear;
- (long long)_findBestType;
- (long long)_matchingTypeForDateNode:(id)arg1;

@end
