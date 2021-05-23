/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>

@interface PLPrimaryResourceDataStoreUniformFileKey : PLPrimaryResourceDataStoreKey

{
    struct PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 _keyStruct;
}

@property (nonatomic) struct PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 keyStruct;

+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;

- (unsigned int)resourceType;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (_Bool)isDerivative;
- (id)uniformTypeIdentifier;
- (unsigned int)resourceVersion;
- (unsigned int)recipeIDForAssetID:(id)arg1;
- (id)keyData;
- (id)initWithKeyStruct:(const void *)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)initWithFilePath:(id)arg1 resourceVersion:(unsigned int)arg2 resourceType:(unsigned int)arg3 recipeID:(unsigned int)arg4;

@end
