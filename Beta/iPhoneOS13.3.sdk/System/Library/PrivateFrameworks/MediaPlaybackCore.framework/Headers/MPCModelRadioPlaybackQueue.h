/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class ICRadioPlaybackHistory, ICRadioPlaybackHistoryStore, ICStoreRequestContext, MPCModelGenericAVItemUserIdentityPropertySet, MPModelRadioStation, MPSectionedCollection, _MPCModelRadioPlaybackQueueStationTracksCollection;

@interface MPCModelRadioPlaybackQueue : NSObject

{
    ICRadioPlaybackHistoryStore *_playbackHistoryStore;
    ICStoreRequestContext *_storeRequestContext;
    MPModelRadioStation *_radioStation;
    _MPCModelRadioPlaybackQueueStationTracksCollection *_stationTracks;
}

@property (retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
@property (nonatomic, readonly) long long numberOfItems;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (copy, nonatomic, readonly) ICRadioPlaybackHistory *playbackHistory;
@property (nonatomic, readonly) MPSectionedCollection *trackModels;
@property (nonatomic, readonly) MPSectionedCollection *tracks;

- (id)initWithPlaybackContext:(id)arg1;
- (id)AVItemAtIndex:(long long)arg1;
- (_Bool)isExplicitItemAtIndex:(long long)arg1;
- (long long)removeExplicitItems;
- (void)savePlaybackHistoryWithUpdates:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)trackForItemAtIndex:(long long)arg1;
- (void)updateWithPersonalizedResponse:(id)arg1;
- (void)savePlaybackHistoryWithUpdates:(CDUnknownBlockType)arg1;
- (id)tracksByApplyingTracksResponse:(id)arg1 currentIndex:(long long)arg2;

@end
