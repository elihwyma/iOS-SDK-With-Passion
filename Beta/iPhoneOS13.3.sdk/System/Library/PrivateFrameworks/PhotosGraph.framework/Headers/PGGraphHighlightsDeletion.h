/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphHighlightsDeletion : PGGraphChange

{
    NSSet *_highlightLocalIdentifiers;
}

@property (nonatomic, readonly) NSSet *highlightLocalIdentifiers;

- (id)description;
- (unsigned long long)type;
- (unsigned long long)changeCount;
- (id)initWithHighlightLocalIdentifiers:(id)arg1;

@end
