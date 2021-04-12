//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, PHAssetCollection, PHFetchResult, PXCMMSuggestionsDataSourceContext;

@interface PXCMMSuggestionsDataSourceState : NSObject <NSCopying>
{
    PHFetchResult *_assetCollections;
    NSDictionary *_suggestionsByAssetCollectionObjectID;
    PXCMMSuggestionsDataSourceContext *_context;
    PHAssetCollection *_confidentMatch;
}

@property(readonly, nonatomic) PHAssetCollection *confidentMatch; // @synthesize confidentMatch=_confidentMatch;
@property(readonly, nonatomic) PXCMMSuggestionsDataSourceContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSDictionary *suggestionsByAssetCollectionObjectID; // @synthesize suggestionsByAssetCollectionObjectID=_suggestionsByAssetCollectionObjectID;
@property(readonly, nonatomic) PHFetchResult *assetCollections; // @synthesize assetCollections=_assetCollections;
// - (void).cxx_destruct;
- (id)_confidentMatch;
- (id)_confidentMatchUsingStrategy:(NSUInteger)arg1;
- (void)_compareSuggestionsUsingContext;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id )arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithAssetCollections:(id)arg1 suggestionsByAssetCollectionObjectID:(id)arg2 context:(id)arg3;

@end

