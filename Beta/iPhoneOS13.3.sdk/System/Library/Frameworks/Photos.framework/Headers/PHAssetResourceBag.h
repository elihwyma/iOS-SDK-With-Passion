/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSArray, PHAssetCreationRequest, PHExternalAssetResource;

@interface PHAssetResourceBag : NSObject

{
    NSArray *_assetResourceContexts;
    _Bool _didValidateForInsertion;
    _Bool _valid;
    _Bool _hasAdjustments;
    _Bool _hasRAW;
    _Bool _hasSpatialOverCapture;
    PHAssetCreationRequest *_assetCreationRequest;
    NSArray *_assetResources;
    long long _mediaType;
    unsigned long long _mediaSubtype;
    PHExternalAssetResource *_primaryResource;
}

@property (weak, nonatomic, readonly) PHAssetCreationRequest *assetCreationRequest;
@property (nonatomic, readonly) NSArray *assetResources;
@property (nonatomic, readonly) _Bool didValidateForInsertion;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly) _Bool hasAdjustments;
@property (nonatomic, readonly) _Bool hasRAW;
@property (nonatomic, readonly) _Bool hasSpatialOverCapture;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtype;
@property (nonatomic, readonly) PHExternalAssetResource *primaryResource;

+ (id)_primaryAssetResource:(id)arg1;
+ (_Bool)_supportsAssetResourceTypes:(id)arg1 mediaType:(long long *)arg2 mediaSubtype:(unsigned long long *)arg3 importedBy:(short)arg4;
+ (_Bool)supportsAssetResourceTypes:(id)arg1 mediaType:(long long *)arg2 importedBy:(short)arg3;

- (id)initWithAssetResources:(id)arg1 assetCreationRequest:(id)arg2;
- (id)assetResourceWithType:(long long)arg1;
- (_Bool)_extractValidatedImageURL:(id *)arg1 imageData:(id *)arg2 fromResource:(id)arg3 photoLibrary:(id)arg4 error:(id *)arg5;
- (_Bool)_extractValidatedVideoURL:(id *)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (_Bool)_extractValidatedAudioURL:(id *)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (_Bool)_extractValidatedAdjustmentsURL:(id *)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (id)_validateAssetResourceForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (_Bool)_validateAssetResourcesForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (_Bool)validateForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)_validatedContextForResource:(id)arg1;
- (id)validatedURLForAssetResource:(id)arg1;
- (id)validatedDataForAssetResource:(id)arg1;

@end
