/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>

@class NSString;

@interface PLPrimaryResourceDataStoreFilePathKey : PLPrimaryResourceDataStoreKey

{
    struct PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1 _keyStruct;
    NSString *_filePathSuffix;
}

@property (nonatomic) struct PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1 keyStruct;
@property (copy, nonatomic) NSString *filePathSuffix;

+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;

- (id)extension;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (id)uniformTypeIdentifier;
- (id)keyData;
- (id)initWithKeyStruct:(const void *)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)descriptionForAssetID:(id)arg1;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)initWithFilePath:(id)arg1 andLibraryID:(id)arg2;

@end
