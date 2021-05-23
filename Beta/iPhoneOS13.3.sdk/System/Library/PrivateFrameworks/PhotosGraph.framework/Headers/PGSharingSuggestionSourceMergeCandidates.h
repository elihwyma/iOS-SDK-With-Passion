/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGSharingSuggestionPhotoKitBasedSource.h>

@interface PGSharingSuggestionSourceMergeCandidates : PGSharingSuggestionPhotoKitBasedSource

- (id)name;
- (double)weight;
- (id)details;
- (id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2;
- (_Bool)canRunWithOptions:(id)arg1;
- (id)meNodeLocalIdentifierForInput:(id)arg1;

@end
