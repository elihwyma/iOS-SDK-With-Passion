/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class PLPhotoLibraryPathManager;

@protocol PLResourceDataStore <Swift>

@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;

+ (unsigned short)storeClassID;
+ (unsigned short)keyLengthWithDataPreview: /* Error: Ran out of types for this method. */;
+ (unsigned short)keyDataIsValid: /* Error: Ran out of types for this method. */;
+ (unsigned short)supportedRecipes;

- (unsigned short)name;
- (unsigned short)descriptionForSubtype: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithPathManager: /* Error: Ran out of types for this method. */;
- (unsigned short)keyFromKeyStruct: /* Error: Ran out of types for this method. */;
- (unsigned short)resourceDataForKey:assetID: /* Error: Ran out of types for this method. */;
- (unsigned short)resourceURLForKey:assetID: /* Error: Ran out of types for this method. */;
- (unsigned short)updateDerivativeResourcesForAsset:forLifecycleEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)virtualResourcesForAsset: /* Error: Ran out of types for this method. */;
- (unsigned short)canStoreExternalResource: /* Error: Ran out of types for this method. */;
- (unsigned short)guessUTIForExternalResource:forAssetKind:managedObjectContext: /* Error: Ran out of types for this method. */;
- (unsigned short)storeExternalResource:forAsset:inContext:options:error:resultingResource: /* Error: Ran out of types for this method. */;
- (unsigned short)requestLocalAvailabilityChange:forResource:asset:inContext:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelLocalAvailabilityChangeRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)requestRemoteAvailabilityChange:forResource:asset:inContext:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)videoResource:matchesOrExceedsQualityLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)canStreamResource: /* Error: Ran out of types for this method. */;
- (unsigned short)requestStreamingURLForResource:asset:intent:inContext:completion: /* Error: Ran out of types for this method. */;

@end
