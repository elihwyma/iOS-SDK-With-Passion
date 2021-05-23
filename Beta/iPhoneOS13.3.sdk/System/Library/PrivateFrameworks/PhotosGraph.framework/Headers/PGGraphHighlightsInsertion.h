/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphHighlightsInsertion : PGGraphChange

{
    NSSet *_highlightLocalIdentifiers;
    NSSet *_highlights;
}

@property (nonatomic, readonly) NSSet *highlightLocalIdentifiers;
@property (nonatomic, readonly) NSSet *highlights;

- (id)description;
- (unsigned long long)type;
- (unsigned long long)changeCount;
- (id)initWithHighlightLocalIdentifiers:(id)arg1;
- (id)initWithHighlights:(id)arg1;

@end
