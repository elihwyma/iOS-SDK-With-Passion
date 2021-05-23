/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, PGManager, PGMoodGeneratorOptions, PGMoodVector, PHAssetCollection;

@interface PGMoodSource : NSObject

{
    PHAssetCollection *_assetCollection;
    PGManager *_graphManager;
    PGMoodGeneratorOptions *_options;
    PGMoodVector *_positiveVector;
    PGMoodVector *_negativeVector;
    NSDictionary *_moodSourceDictionary;
}

@property (readonly) PHAssetCollection *assetCollection;
@property (readonly) PGManager *graphManager;
@property (readonly) PGMoodGeneratorOptions *options;
@property (retain) PGMoodVector *positiveVector;
@property (retain) PGMoodVector *negativeVector;
@property (readonly) NSDictionary *moodSourceDictionary;

+ (id)_plistName;

- (double)weight;
- (id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3;
- (id)_plistMoodIdentifiers;
- (id)_moodVectorForMoodIdentifier:(id)arg1;
- (id)_moodVectors;
- (void)_combineMoodVectors;
- (unsigned long long)_sourceInputCount;

@end
