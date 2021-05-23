/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class AltClipCollection, KonaClip, MiroAutoEditKenBurnsController, MultiUpClip, NSArray;

__attribute__((visibility("hidden")))
@interface MiroAutoLayoutClip : NSObject

{
    _Bool _canSupportPrecedingTransition;
    _Bool _canSupportMultiUp;
    _Bool _itemShouldHeroFeaturedPerson;
    _Bool _transitionAssigned;
    _Bool _zoomToPersonCandidate;
    _Bool _isPortrait;
    _Bool _isSquare;
    _Bool _facesAreClose;
    _Bool _durationIsFlexible;
    _Bool _missedRollToBeats;
    _Bool _couldSupportNUpBase;
    _Bool _supportsHalf;
    _Bool _supportsOneThird;
    _Bool _supportsTwoThirds;
    int _clipType;
    int _preferredDirection;
    int _directionOfMovement;
    int _numberOfFaces;
    KonaClip *_projectClip;
    AltClipCollection *_treatmentInfo;
    NSArray *_multiUpPeers;
    MiroAutoLayoutClip *_selectedPeer;
    MultiUpClip *_multiUpClip;
    MiroAutoEditKenBurnsController *_kbController;
}

@property (retain, nonatomic) AltClipCollection *treatmentInfo;
@property (retain, nonatomic) KonaClip *projectClip;
@property (nonatomic) int clipType;
@property (nonatomic) int preferredDirection;
@property (nonatomic) _Bool canSupportPrecedingTransition;
@property (nonatomic) _Bool canSupportMultiUp;
@property (retain, nonatomic) NSArray *multiUpPeers;
@property (retain, nonatomic) MiroAutoLayoutClip *selectedPeer;
@property (retain, nonatomic) MultiUpClip *multiUpClip;
@property (nonatomic) _Bool itemShouldHeroFeaturedPerson;
@property (nonatomic) int directionOfMovement;
@property (nonatomic) _Bool transitionAssigned;
@property (nonatomic) _Bool zoomToPersonCandidate;
@property (nonatomic, readonly) _Bool isPortrait;
@property (nonatomic, readonly) _Bool isSquare;
@property (nonatomic, readonly) int numberOfFaces;
@property (nonatomic, readonly) _Bool facesAreClose;
@property (nonatomic) _Bool durationIsFlexible;
@property (nonatomic) _Bool missedRollToBeats;
@property (nonatomic) _Bool couldSupportNUpBase;
@property (nonatomic) _Bool supportsHalf;
@property (nonatomic) _Bool supportsOneThird;
@property (nonatomic) _Bool supportsTwoThirds;
@property (retain, nonatomic) MiroAutoEditKenBurnsController *kbController;

+ (_Bool)clipIsPortrait:(id)arg1;
+ (_Bool)clipIsSquare:(id)arg1;
+ (_Bool)clipIsPano:(id)arg1;
+ (double)clipAspectRatio:(id)arg1;
+ (_Bool)clipIsPortraitOrSquare:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isVideo;
- (_Bool)hasMultipleFaces;
- (_Bool)isFavorite;
- (_Bool)isEdited;
- (_Bool)isPano;
- (void)establishProjectClipType;
- (_Bool)isTransition;
- (void)establishIsPortrait;
- (void)establishIsSquare;
- (void)establishFaceInfo:(id)arg1;
- (void)establishDurationFlexibility;
- (void)establishPreferredDirection;
- (void)establishFacesAreClose;
- (void)establishCanSupportPrecedingTransition;
- (int)establishRequiredTreatmentForAspect:(double)arg1 polishDelegate:(id)arg2;
- (void)applyAssignedTreatmentsFromRequired;
- (_Bool)clipCanZoomCrop:(id)arg1;
- (id)locationForClip;
- (id)initWithKonaClip:(id)arg1 polishDelegate:(id)arg2 zoomToPersonCandidate:(_Bool)arg3;
- (double)distanceToLayoutClip:(id)arg1;

@end
