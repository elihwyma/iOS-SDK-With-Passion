/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFActionBuilder.h>

@class HFPlaybackArchive, HMMediaPlaybackAction, NSNumber, NSSet, NSString;

@interface HFMediaPlaybackActionBuilder : HFActionBuilder

{
    NSSet *_mediaProfiles;
    long long _targetPlayState;
    NSNumber *_targetVolume;
    HFPlaybackArchive *_playbackArchive;
    NSSet *_accessories;
}

@property (copy, nonatomic) NSSet *accessories;
@property (nonatomic, readonly) HMMediaPlaybackAction *action;
@property (copy, nonatomic) NSSet *mediaProfiles;
@property (nonatomic) long long targetPlayState;
@property (retain, nonatomic) NSNumber *targetVolume;
@property (retain, nonatomic) HFPlaybackArchive *playbackArchive;
@property (copy, nonatomic, readonly) NSString *localizedDescription;

+ (Class)homeKitRepresentationClass;

- (_Bool)requiresDeviceUnlock;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)commitItem;
- (id)createNewAction;
- (_Bool)updateWithActionBuilder:(id)arg1;
- (_Bool)isAffectedByEndEvents;
- (id)copyForCreatingNewAction;
- (_Bool)hasSameTargetAsAction:(id)arg1;
- (id)performValidation;
- (id)mediaProfileContainersForAccessories:(id)arg1 home:(id)arg2;
- (_Bool)isMediaActionValid:(id *)arg1;
- (void)_ensureConsistency;
- (void)defaultActionIfMediaActionInvalid;

@end
