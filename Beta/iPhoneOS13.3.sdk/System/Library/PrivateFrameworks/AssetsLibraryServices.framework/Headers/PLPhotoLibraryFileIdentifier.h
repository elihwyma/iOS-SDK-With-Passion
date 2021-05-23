/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLPhotoLibraryFileIdentifier : NSObject

{
    unsigned char _bundleScope;
    _Bool _isData;
    unsigned int _resourceType;
    unsigned int _resourceVersion;
    unsigned int _recipeId;
    NSString *_uuid;
    NSString *_uti;
    NSString *_originalFilename;
}

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic, readonly) unsigned char bundleScope;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSString *originalFilename;
@property (nonatomic, readonly) unsigned int resourceType;
@property (nonatomic, readonly) unsigned int resourceVersion;
@property (nonatomic, readonly) unsigned int recipeId;
@property (nonatomic, readonly) _Bool isData;

+ (id)uuidFromURL:(id)arg1;
+ (_Bool)isValidOriginalURL:(id)arg1 pathManager:(id)arg2;

- (id)init;
- (id)description;
- (id)extension;
- (id)initWithAssetUuid:(id)arg1 bundleScope:(unsigned char)arg2 uti:(id)arg3 resourceVersion:(unsigned int)arg4 resourceType:(unsigned int)arg5 recipeID:(unsigned int)arg6 originalFilename:(id)arg7;
- (id)initWithAssetUuid:(id)arg1 uti:(id)arg2 resourceVersion:(unsigned int)arg3 resourceType:(unsigned int)arg4;
- (id)initWithAssetUuid:(id)arg1 uti:(id)arg2 resourceVersion:(unsigned int)arg3 recipeID:(unsigned int)arg4;

@end
