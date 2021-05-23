/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol PLCodecIdentity, PLResourceDataStore, PLResourceDataStoreKey, PLUniformTypeIdentifierIdentity;

@protocol PLWriteableResource <Swift>

@property (nonatomic) unsigned int resourceType;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int recipeID;
@property (nonatomic) unsigned int orientation;
@property (retain, nonatomic) id <PLResourceDataStore> dataStore;
@property (nonatomic) long long dataStoreSubtype;
@property (retain, nonatomic) id <PLResourceDataStoreKey> dataStoreKey;
@property (nonatomic) short remoteAvailability;
@property (nonatomic) float scale;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) long long unorientedHeight;
@property (nonatomic) int qualitySortValue;
@property (retain, nonatomic) id <PLCodecIdentity> codecID;
@property (retain, nonatomic) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;

@end
