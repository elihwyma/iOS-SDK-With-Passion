/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@interface PLThumbnailResourceDataStoreKey : NSObject <Swift>

{
    struct PLThumbnailDataStoreKeyStruct_V1 _keyStruct;
}

@property (nonatomic) struct PLThumbnailDataStoreKeyStruct_V1 keyStruct;
@property (nonatomic, readonly) unsigned int tableType;
@property (nonatomic, readonly) int index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
+ (unsigned int)recipeIDForTableType:(unsigned int)arg1 inStore:(id)arg2;
+ (_Bool)representsSquareResourceForPayloadKeyData:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned int)resourceType;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (_Bool)isDerivative;
- (id)uniformTypeIdentifier;
- (unsigned int)resourceVersion;
- (_Bool)representsSquareResource;
- (void)tableType:(unsigned int *)arg1 index:(int *)arg2;
- (id)keyData;
- (id)initWithKeyStruct:(const void *)arg1;
- (_Bool)isEqualToKey:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)descriptionForAssetID:(id)arg1;

@end
