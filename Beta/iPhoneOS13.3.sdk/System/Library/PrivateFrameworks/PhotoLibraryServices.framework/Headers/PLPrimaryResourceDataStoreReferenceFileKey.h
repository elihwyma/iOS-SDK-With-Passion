/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>

@class NSURL;

@interface PLPrimaryResourceDataStoreReferenceFileKey : PLPrimaryResourceDataStoreKey

{
    NSURL *_cachedUrl;
    unsigned char _onceToken;
    struct PLPrimaryDataStore_ReferenceFileStrategy_KeyStruct_V1 _keyStruct;
}

+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;

- (id)uniformTypeIdentifier;
- (id)keyData;
- (id)initWithKeyStruct:(const void *)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)initWithResourceType:(unsigned int)arg1;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)fileURLForAssetID:(id)arg1 inContext:(id)arg2;

@end
