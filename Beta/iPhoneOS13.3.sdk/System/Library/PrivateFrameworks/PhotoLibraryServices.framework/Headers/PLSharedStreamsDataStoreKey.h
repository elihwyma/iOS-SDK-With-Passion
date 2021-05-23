/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@interface PLSharedStreamsDataStoreKey : NSObject <Swift>

{
    NSString *_relativePath;
    unsigned int _sharedStreamsResourceType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_replacementPathExtensionForType:(unsigned int)arg1;
+ (id)_keyDataWithRelativePath:(id)arg1 type:(unsigned int)arg2;
+ (id)_relativeFilePathForPersonID:(id)arg1 albumID:(id)arg2 dcimDirectory:(id)arg3 fileName:(id)arg4;
+ (unsigned long long)dataLengthFromPreviewByte:(unsigned char)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned int)resourceType;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (_Bool)isDerivative;
- (id)uniformTypeIdentifier;
- (unsigned int)resourceVersion;
- (unsigned int)recipeIDForAssetID:(id)arg1;
- (id)keyData;
- (id)initWithKeyStruct:(const void *)arg1;
- (_Bool)isEqualToKey:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)descriptionForAssetID:(id)arg1;
- (id)initWithAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;

@end
