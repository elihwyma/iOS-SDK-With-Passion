/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGMeaningfulEventAggregationMemoryTitleGenerator : PGTitleGenerator

{
    unsigned long long _meaning;
    NSSet *_features;
    NSSet *_meaningfulEvents;
}

@property (nonatomic, readonly) unsigned long long meaning;
@property (nonatomic, readonly) NSSet *features;
@property (nonatomic, readonly) NSSet *meaningfulEvents;

+ (id)_momentNodesFromMeaningfulEvents:(id)arg1;

- (id)_subtitle;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)_meaningLabelForTitle;
- (id)initWithMeaning:(unsigned long long)arg1 features:(id)arg2 meaningfulEvents:(id)arg3;
- (id)_meaningLabelForNotReliableTitle;

@end
