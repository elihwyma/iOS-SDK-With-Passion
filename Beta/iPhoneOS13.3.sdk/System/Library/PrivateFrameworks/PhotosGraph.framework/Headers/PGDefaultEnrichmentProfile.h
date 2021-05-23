/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, PGCurationOptions, PGDejunkerDeduperOptions, PGKeyAssetCurationOptions, PGManager;

@interface PGDefaultEnrichmentProfile : NSObject

{
    NSMutableDictionary *_debugInfos;
    _Bool _collectsDebugInfo;
    PGManager *_manager;
    PGDejunkerDeduperOptions *_extendedCurationOptions;
}

@property (nonatomic, readonly) PGManager *manager;
@property (nonatomic, readonly) PGCurationOptions *curationOptions;
@property (nonatomic, readonly) PGKeyAssetCurationOptions *keyAssetCurationOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) _Bool collectsDebugInfo;
@property (readonly) NSDictionary *debugInfos;
@property (retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions;
@property (nonatomic, readonly) unsigned short targetEnrichmentState;

+ (unsigned long long)durationForSummary;
+ (long long)cardinalModeForSummary;

- (id)initWithManager:(id)arg1;
- (id)legacyKeyAssetWithHighlightTailorContext:(id)arg1;
- (_Bool)canUseLocationInformationForHighlightTailorContext:(id)arg1;
- (_Bool)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)highlightTailorContextForHighlight:(id)arg1;
- (double)promotionScoreWithHighlightTailorContext:(id)arg1;
- (unsigned long long)moodWithHighlightTailorContext:(id)arg1;
- (id)titleWithHighlightTailorContext:(id)arg1 curatedAssets:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(_Bool)arg4;
- (id)momentTitleByMomentUUIDWithHighlightTailorContext:(id)arg1;
- (id)keyAssetWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)extendedCurationWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)curationsWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (unsigned short)enrichmentStateWithHighlightTailorContext:(id)arg1;
- (id)curationOptionsForForHighlightTailorContext:(id)arg1;
- (id)keyAssetCurationCriteriaWithHighlightTailorContext:(id)arg1;
- (id)debugInfoDictionaryByAddingItemInfosToDebugInfo:(id)arg1;
- (id)sceneInfoWithAsset:(id)arg1;
- (id)faceInfosWithAsset:(id)arg1;

@end
