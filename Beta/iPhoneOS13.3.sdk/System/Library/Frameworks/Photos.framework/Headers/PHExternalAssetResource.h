/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL, PHAssetResourceCreationOptions;

@interface PHExternalAssetResource : NSObject

{
    _Bool _duplicateAllowsReadAccess;
    _Bool _isLibraryAssetResource;
    long long _resourceType;
    PHAssetResourceCreationOptions *_creationOptions;
    unsigned long long _cplResourceType;
    NSData *_data;
    NSURL *_fileURL;
    long long _pixelWidth;
    long long _pixelHeight;
}

@property (nonatomic, readonly) long long type;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) PHAssetResourceCreationOptions *creationOptions;
@property (nonatomic, readonly) _Bool isLibraryAssetResource;
@property (nonatomic, setter=_setDuplicateAllowsReadAccess:) _Bool duplicateAllowsReadAccess;
@property (copy, nonatomic) NSURL *fileURL;
@property (nonatomic) long long pixelWidth;
@property (nonatomic) long long pixelHeight;
@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) unsigned long long cplResourceType;

+ (unsigned long long)probableCPLResourceTypeFromAssetResourceType:(long long)arg1;
+ (id)assetResourceForDuplicatingAssetResource:(id)arg1 asData:(_Bool)arg2 error:(id *)arg3;

- (id)init;
- (id)initWithResourceType:(long long)arg1;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;

@end
