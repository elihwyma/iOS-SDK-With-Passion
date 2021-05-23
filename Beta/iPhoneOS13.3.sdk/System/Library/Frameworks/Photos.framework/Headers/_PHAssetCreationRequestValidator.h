/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHValidator.h>

@class NSString, PHAssetCreationRequest;

@interface _PHAssetCreationRequestValidator : PHValidator

{
    PHAssetCreationRequest *_assetCreationRequest;
    NSString *_validatedPairingIdentifier;
    CDStruct_1b6d18a9 _validatedVideoDuration;
    CDStruct_1b6d18a9 _validatedImageDisplayTime;
}

@property (weak, nonatomic, readonly) PHAssetCreationRequest *assetCreationRequest;
@property (nonatomic, readonly) NSString *validatedPairingIdentifier;
@property (nonatomic, readonly) CDStruct_1b6d18a9 validatedVideoDuration;
@property (nonatomic, readonly) CDStruct_1b6d18a9 validatedImageDisplayTime;

- (id)initWithAssetCreationRequest:(id)arg1;
- (void)getLivePhotoVideoMetadataFromURL:(id)arg1 pairingIdentifier:(id *)arg2 videoDuration:(CDStruct_1b6d18a9 *)arg3 imageDisplayTime:(CDStruct_1b6d18a9 *)arg4;

@end
