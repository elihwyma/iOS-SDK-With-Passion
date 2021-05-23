/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSDictionary, NSString, PGDejunkerDeduperOptions;

@protocol PGEnrichmentProfile <Swift>

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) _Bool collectsDebugInfo;
@property (readonly) NSDictionary *debugInfos;
@property (retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions;
@property (nonatomic, readonly) unsigned short targetEnrichmentState;

- (unsigned short)canUseLocationInformationForHighlightTailorContext: /* Error: Ran out of types for this method. */;
- (unsigned short)canEnrichHighlight:withOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)highlightTailorContextForHighlight: /* Error: Ran out of types for this method. */;
- (unsigned short)promotionScoreWithHighlightTailorContext: /* Error: Ran out of types for this method. */;
- (unsigned short)moodWithHighlightTailorContext: /* Error: Ran out of types for this method. */;
- (unsigned short)titleWithHighlightTailorContext:curatedAssets:keyAsset:createVerboseTitle: /* Error: Ran out of types for this method. */;
- (unsigned short)momentTitleByMomentUUIDWithHighlightTailorContext: /* Error: Ran out of types for this method. */;
- (unsigned short)keyAssetWithHighlightTailorContext:progressBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)extendedCurationWithHighlightTailorContext:progressBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)curationsWithHighlightTailorContext:progressBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)enrichmentStateWithHighlightTailorContext: /* Error: Ran out of types for this method. */;
- (unsigned short)curationOptionsForForHighlightTailorContext: /* Error: Ran out of types for this method. */;
- (unsigned short)keyAssetCurationCriteriaWithHighlightTailorContext: /* Error: Ran out of types for this method. */;

@end
