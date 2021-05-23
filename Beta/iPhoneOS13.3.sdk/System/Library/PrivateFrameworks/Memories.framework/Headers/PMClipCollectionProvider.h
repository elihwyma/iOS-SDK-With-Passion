/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

#import <Memories/Swift-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, VEKProduction, VEKResult;

@protocol PMClipCollectionProviderDelegate, PMEditProviderDelegate, VEKProjectProtocol;

@interface PMClipCollectionProvider : NSObject <Swift>

{
    _Bool _shouldCancel;
    VEKProduction *_production;
    id <PMEditProviderDelegate> _delegate;
    id <PMClipCollectionProviderDelegate> _clipCollectionDelegate;
    VEKResult *_result;
    id <VEKProjectProtocol> _project;
    double _currentDuration;
    NSMutableArray *_assetClipProviders;
    NSMutableSet *_projectAssets;
}

@property (nonatomic, readonly) VEKProduction *production;
@property (nonatomic, readonly) NSMutableArray *assetClipProviders;
@property (retain, nonatomic) id <VEKProjectProtocol> project;
@property (retain, nonatomic) VEKResult *result;
@property (nonatomic) double currentDuration;
@property (retain, nonatomic) NSMutableArray *assetClipProviders;
@property (retain, nonatomic) NSMutableSet *projectAssets;
@property (nonatomic) _Bool shouldCancel;
@property (weak, nonatomic) id <PMClipCollectionProviderDelegate> clipCollectionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) VEKProduction *production;
@property (weak, nonatomic) id <PMEditProviderDelegate> delegate;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)numberOfItems;
- (void)updateWithResult:(id)arg1;
- (_Bool)assetHasUserModifiedAudioLevel:(id)arg1;
- (_Bool)assetIsPartOfMultiUp:(id)arg1;
- (void)triggerEdit;
- (_Bool)clipIsPartOfSplit:(id)arg1;
- (_Bool)clipIsPartOfMultiUp:(id)arg1;
- (id)initWithProduction:(id)arg1;
- (id)clipProvidersForAsset:(id)arg1;
- (id)suggestionsForAsset:(id)arg1;
- (id)initWithResult:(id)arg1 production:(id)arg2;
- (unsigned long long)clipProviderIndexForSequenceTime:(CDStruct_1b6d18a9)arg1;
- (id)clipProviderAtIndex:(unsigned long long)arg1;
- (id)suggestedAssets;
- (id)currentProductionAssetIDs;
- (void)removeClipAtIndex:(unsigned long long)arg1;
- (id)indexesForClipProvidersOfAssetID:(id)arg1;
- (id)currentProductionAssets;
- (void)updateClipProvidersForAssets:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateWithResult:(id)arg1 error:(id)arg2;
- (id)allAssetsIncludingAllMomentsAssets:(_Bool)arg1;
- (void)removeSuggestionsForAsset:(id)arg1;
- (void)updateSuggestionsForAddedAsset:(id)arg1;
- (id)clipSuggestionsForAsset:(id)arg1;
- (id)assetSetFromProject:(id)arg1;
- (void)validateRangeSuggestionMatching;
- (id)_otherSplitClipsForClip:(id)arg1;

@end
