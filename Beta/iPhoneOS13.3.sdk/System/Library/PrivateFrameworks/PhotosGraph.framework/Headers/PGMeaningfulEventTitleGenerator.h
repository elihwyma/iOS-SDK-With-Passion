/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGDefaultCollectionTitleGenerator.h>

@class NSString;

@interface PGMeaningfulEventTitleGenerator : PGDefaultCollectionTitleGenerator

{
    NSString *_meaningLabel;
    _Bool _meaningIsReliable;
}

- (id)_title;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)_meaningLabelForTitle;
- (id)_timeTitle;
- (id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 meaningIsReliable:(_Bool)arg3;

@end
