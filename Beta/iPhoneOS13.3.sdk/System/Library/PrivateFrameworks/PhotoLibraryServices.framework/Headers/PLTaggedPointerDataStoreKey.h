/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoFoundation/PFTaggedPointer.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@interface PLTaggedPointerDataStoreKey : PFTaggedPointer <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)keyWithKeyStruct:(const void *)arg1 keyLength:(unsigned long long)arg2 forStoreClassID:(unsigned int)arg3 inLibraryWithID:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned int)resourceType;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (_Bool)isDerivative;
- (id)uniformTypeIdentifier;
- (unsigned int)resourceVersion;
- (unsigned int)recipeIDForAssetID:(id)arg1;
- (_Bool)representsSquareResource;
- (void)tableType:(unsigned int *)arg1 index:(int *)arg2;
- (id)keyData;
- (id)initWithKeyStruct:(const void *)arg1;
- (_Bool)isEqualToKey:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)descriptionForAssetID:(id)arg1;
- (id)_heapAllocatedRepresentationInLibraryWithID:(id)arg1;

@end
