/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDate;

@protocol PLAssetID, PLCodecIdentity, PLResourceDataStore, PLResourceDataStoreKey;

@protocol PLResource <Swift>

@property (nonatomic, readonly) unsigned int orientation;
@property (nonatomic, readonly) long long unorientedWidth;
@property (nonatomic, readonly) long long unorientedHeight;
@property (nonatomic, readonly) long long orientedWidth;
@property (nonatomic, readonly) long long orientedHeight;
@property (nonatomic, readonly) float scale;
@property (copy, nonatomic, readonly) id <PLAssetID> assetID;
@property (nonatomic, readonly) unsigned long long cplType;
@property (nonatomic, readonly) id <PLResourceDataStore> dataStore;
@property (nonatomic, readonly) long long dataStoreSubtype;
@property (nonatomic, readonly) id <PLResourceDataStoreKey> dataStoreKey;
@property (nonatomic, readonly) unsigned int recipeID;
@property (nonatomic, readonly) short localAvailability;
@property (nonatomic, readonly) short localAvailabilityTarget;
@property (nonatomic, readonly) short remoteAvailability;
@property (nonatomic, readonly) short remoteAvailabilityTarget;
@property (nonatomic, readonly) int qualitySortValue;
@property (nonatomic, readonly) id <PLCodecIdentity> codecID;
@property (nonatomic, readonly) long long dataLength;
@property (nonatomic, readonly) long long estimatedDataLength;
@property (nonatomic, readonly) short trashedState;
@property (nonatomic, readonly) NSDate *trashedDate;

- (unsigned short)isDefaultOrientation;
- (unsigned short)isDerivative;
- (unsigned short)isPlayableVideo;

@end
