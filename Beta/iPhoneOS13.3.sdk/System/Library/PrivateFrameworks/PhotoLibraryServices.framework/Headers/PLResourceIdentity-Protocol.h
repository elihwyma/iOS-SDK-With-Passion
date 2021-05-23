/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol PLUniformTypeIdentifierIdentity;

@protocol PLResourceIdentity <Swift>

@property (nonatomic, readonly) unsigned int resourceType;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, readonly) unsigned int recipeID;
@property (nonatomic, readonly) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;

@end
