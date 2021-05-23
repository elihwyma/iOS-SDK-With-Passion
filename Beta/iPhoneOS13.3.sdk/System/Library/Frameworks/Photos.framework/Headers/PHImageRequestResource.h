/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSString, PLPhotoLibrary;

@protocol PLUniformTypeIdentifierIdentity;

@interface PHImageRequestResource : NSObject

{
    PLPhotoLibrary *_photoLibrary;
    unsigned int _resourceType;
    unsigned int _version;
    unsigned int _recipeID;
    unsigned int _orientation;
    id <PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
    long long _unorientedWidth;
    long long _unorientedHeight;
}

@property (nonatomic, readonly) unsigned int resourceType;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, readonly) unsigned int recipeID;
@property (nonatomic, readonly) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;
@property (nonatomic, readonly) unsigned int orientation;
@property (nonatomic, readonly) long long unorientedWidth;
@property (nonatomic, readonly) long long unorientedHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)imageRequestResourceForDataStoreKey:(id)arg1 store:(id)arg2 assetObjectID:(id)arg3 context:(id)arg4;

- (id)initWithResource:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2;

@end
