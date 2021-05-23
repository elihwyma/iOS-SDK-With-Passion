/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@interface PHAssetCreationAdjustmentBakeInOptions : NSObject <Swift>

{
    _Bool _shouldBakeInIfLivePhotoPlaybackDisabled;
    _Bool _shouldBakeInIfLivePhotoMuted;
    _Bool _shouldBakeInIfAdjustedByThirdParty;
    _Bool _shouldBakeInIfCropped;
    _Bool _shouldBakeInIfTimelineTrimmed;
    _Bool _shouldBakeInIfPortraitDepthEffectEnabled;
    _Bool _shouldBakeInIfContainsPenultimateResources;
    _Bool _flattenLivePhotoToStillIfNeeded;
}

@property (nonatomic) _Bool shouldBakeInIfLivePhotoPlaybackDisabled;
@property (nonatomic) _Bool shouldBakeInIfLivePhotoMuted;
@property (nonatomic) _Bool shouldBakeInIfAdjustedByThirdParty;
@property (nonatomic) _Bool shouldBakeInIfCropped;
@property (nonatomic) _Bool shouldBakeInIfTimelineTrimmed;
@property (nonatomic) _Bool shouldBakeInIfPortraitDepthEffectEnabled;
@property (nonatomic) _Bool shouldBakeInIfContainsPenultimateResources;
@property (nonatomic) _Bool flattenLivePhotoToStillIfNeeded;

+ (id)adjustmentBakeInOptionsForPublishingOriginals;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1;

@end
