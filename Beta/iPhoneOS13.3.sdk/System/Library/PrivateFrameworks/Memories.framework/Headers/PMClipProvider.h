/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class AVAsset, PHAsset, PHImageManager, VEKProduction, VEKSuggestion;

@protocol PMClipProviderDelegate, PMRelatedClipsDelegate, VEKClipProtocol;

@interface PMClipProvider : NSObject

{
    id <PMClipProviderDelegate> _delegate;
    id <PMRelatedClipsDelegate> _relatedClipsDelegate;
    id <VEKClipProtocol> _clip;
    VEKProduction *_production;
    VEKSuggestion *_suggestion;
    double _projectDuration;
    AVAsset *_avAsset;
    id <VEKClipProtocol> _introTransition;
    id <VEKClipProtocol> _outroTransition;
    CDStruct_e83c9415 _trimTimeRange;
}

@property (retain, nonatomic) id <VEKClipProtocol> clip;
@property (retain, nonatomic) VEKProduction *production;
@property (nonatomic) double projectDuration;
@property (nonatomic, readonly) PHImageManager *imageManager;
@property (retain, nonatomic) AVAsset *avAsset;
@property (retain, nonatomic) id <VEKClipProtocol> introTransition;
@property (retain, nonatomic) id <VEKClipProtocol> outroTransition;
@property (nonatomic) CDStruct_e83c9415 trimTimeRange;
@property (weak, nonatomic) id <PMClipProviderDelegate> delegate;
@property (weak, nonatomic) id <PMRelatedClipsDelegate> relatedClipsDelegate;
@property (retain, nonatomic) VEKSuggestion *suggestion;
@property (nonatomic, readonly) PHAsset *phAsset;
@property (nonatomic, readonly) double maxDuration;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) _Bool trimmable;
@property (nonatomic) long long usage;
@property (nonatomic) long long volume;
@property (nonatomic) long long specialTreatment;
@property (nonatomic) double reorderTimeOffset;
@property (nonatomic, readonly) CDStruct_e83c9415 suggestionTrimTimeRange;

+ (id)getThumbnailQueue;

- (id)description;
- (void)requestAVAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)requestPlayerItemWithResultHandler:(CDUnknownBlockType)arg1;
- (void)createSuggestionIfNeeded;
- (_Bool)shouldTrimToProposedTimeRange:(CDStruct_e83c9415)arg1;
- (void)replaceSuggestionWithSuggestion:(id)arg1;
- (void)addSuggestionToProduction;
- (id)suggestionsForAsset:(id)arg1;
- (id)createSlomoComposition:(id)arg1;
- (id)initWithClip:(id)arg1 production:(id)arg2 result:(id)arg3;
- (_Bool)trimToTimeRange:(CDStruct_e83c9415)arg1;
- (void)requestStillImageForSize:(struct CGSize)arg1 atTime:(CDStruct_1b6d18a9)arg2 withResultHandler:(CDUnknownBlockType)arg3;

@end
