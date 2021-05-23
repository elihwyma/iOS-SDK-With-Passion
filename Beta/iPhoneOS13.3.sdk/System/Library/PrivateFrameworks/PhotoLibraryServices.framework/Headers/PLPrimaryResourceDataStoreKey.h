/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLPrimaryResourceDataStoreKey : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
+ (unsigned int)strategyFromExternalResource:(id)arg1 asset:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)_init;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (id)uniformTypeIdentifier;
- (id)keyData;
- (id)initWithKeyStruct:(const void *)arg1;
- (_Bool)isEqualToKey:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)descriptionForAssetID:(id)arg1;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)_initWithKeyStruct:(const void *)arg1;
- (id)_initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;

@end
