/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, PGManager;

@protocol OS_dispatch_group;

@interface PGHighlightTailor : NSObject

{
    NSObject<OS_dispatch_group> *_enrichmentCommitGroup;
    PGManager *_manager;
    NSArray *_enrichmentProfiles;
    NSSet *_verifiedPersonLocalIdentifiers;
}

@property (retain, nonatomic) PGManager *manager;
@property (retain, nonatomic) NSArray *enrichmentProfiles;
@property (readonly) NSSet *verifiedPersonLocalIdentifiers;

+ (_Bool)itemScoreIsAutoplayable:(double)arg1;

- (id)initWithManager:(id)arg1;
- (id)initForTesting;
- (id)assetSortDescriptors;
- (double)highlightVisibilityWeightForItem:(id)arg1;
- (id)computeChangedVisibilityScoresForItems:(id)arg1;
- (id)enrichmentValuesForHighlight:(id)arg1 usingEnrichmentProfile:(id)arg2 options:(unsigned long long)arg3 reportChangedValuesOnly:(_Bool)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (void)writeHighlightEnrichmentValues:(id)arg1 toChangeRequest:(id)arg2;
- (id)allHighlightModelsNeedingEnrichmentForHighlightSubtype:(long long)arg1 options:(unsigned long long)arg2;
- (_Bool)enrichHighlights:(id)arg1 options:(unsigned long long)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (_Bool)enrichAllHighlightsWithOptions:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)bestEnrichmentProfileForHighlight:(id)arg1 options:(unsigned long long)arg2;
- (id)keyAssetFromHighlight:(id)arg1;
- (id)sortedCurationOfType:(unsigned short)arg1 fromHighlight:(id)arg2;

@end
