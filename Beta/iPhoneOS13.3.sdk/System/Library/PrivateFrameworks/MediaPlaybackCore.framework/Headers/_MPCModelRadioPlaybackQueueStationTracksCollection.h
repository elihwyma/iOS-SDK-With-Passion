/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class ICMutableRadioPlaybackHistory, MPCModelGenericAVItemUserIdentityPropertySet, MPCPlaybackRequestEnvironment, MPPropertySet, MPSectionedCollection, NSHashTable;

@protocol OS_dispatch_queue;

@interface _MPCModelRadioPlaybackQueueStationTracksCollection : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_activeModelGenericAVItems;
    _Bool _isSiriInitiated;
    MPPropertySet *_itemProperties;
    ICMutableRadioPlaybackHistory *_playbackHistory;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPSectionedCollection *_trackModels;
    MPSectionedCollection *_tracks;
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
}

@property (nonatomic, readonly) ICMutableRadioPlaybackHistory *playbackHistory;
@property (copy, nonatomic, readonly) MPSectionedCollection *trackModels;
@property (copy, nonatomic, readonly) MPSectionedCollection *tracks;
@property (retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
@property (nonatomic, readonly) long long numberOfItems;

- (id)initWithPlaybackContext:(id)arg1;
- (id)AVItemAtIndex:(long long)arg1;
- (_Bool)isExplicitItemAtIndex:(long long)arg1;
- (long long)removeExplicitItems;
- (id)trackForItemAtIndex:(long long)arg1;
- (void)updateWithPersonalizedResponse:(id)arg1;

@end
