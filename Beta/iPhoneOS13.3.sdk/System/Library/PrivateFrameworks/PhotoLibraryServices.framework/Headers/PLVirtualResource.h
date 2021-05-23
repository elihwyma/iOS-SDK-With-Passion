/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDate, NSString, NSURL, PLVirtualResourceUniformTypeIdentifierProxy;

@protocol PLAssetID, PLCodecIdentity, PLResourceDataStore, PLResourceDataStoreKey, PLUniformTypeIdentifierIdentity;

@interface PLVirtualResource : NSObject <Swift>

{
    short _localAvailabilityTarget;
    short _remoteAvailability;
    short _remoteAvailabilityTarget;
    short _trashedState;
    unsigned int _version;
    unsigned int _resourceType;
    unsigned int _recipeID;
    unsigned int _orientation;
    int _qualitySortValue;
    float _scale;
    id <PLAssetID> _assetID;
    id <PLResourceDataStore> _dataStore;
    long long _dataStoreSubtype;
    id <PLResourceDataStoreKey> _dataStoreKey;
    long long _unorientedWidth;
    long long _unorientedHeight;
    id <PLCodecIdentity> _codecID;
    id <PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
    NSDate *_trashedDate;
}

@property (nonatomic, readonly) PLVirtualResourceUniformTypeIdentifierProxy *uniformTypeIdentifier;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int resourceType;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, readonly) unsigned int recipeID;
@property (nonatomic, readonly) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;
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

- (void)setVersion:(unsigned int)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setScale:(float)arg1;
- (void)setResourceType:(unsigned int)arg1;
- (void)setRecipeID:(unsigned int)arg1;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (_Bool)isDefaultOrientation;
- (_Bool)isDerivative;
- (_Bool)isPlayableVideo;
- (id)photosCTLJSONDict;
- (void)setDataStore:(id)arg1;
- (void)setDataStoreSubtype:(long long)arg1;
- (void)setDataStoreKey:(id)arg1;
- (void)setRemoteAvailability:(short)arg1;
- (void)setUnorientedWidth:(long long)arg1;
- (void)setUnorientedHeight:(long long)arg1;
- (void)setQualitySortValue:(int)arg1;
- (void)setCodecID:(id)arg1;
- (void)setUniformTypeIdentifierID:(id)arg1;
- (id)initWithAsset:(id)arg1 resourceType:(unsigned int)arg2 version:(unsigned int)arg3 recipeID:(unsigned int)arg4;
- (id)initWithRecipe:(id)arg1 forAsset:(id)arg2;

@end
