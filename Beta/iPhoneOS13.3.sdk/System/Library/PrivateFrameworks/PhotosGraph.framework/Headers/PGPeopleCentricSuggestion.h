/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGSingleAssetSuggestion.h>

@class NSArray;

@interface PGPeopleCentricSuggestion : PGSingleAssetSuggestion

{
    NSArray *_suggestedPersonLocalIdentifiers;
}

- (id)suggestedPersonLocalIdentifiers;
- (id)initWithPersonLocalIdentifier:(id)arg1 asset:(id)arg2;
- (id)initWithPersonLocalIdentifiers:(id)arg1 asset:(id)arg2;

@end
