/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSDate, NSManagedObjectID, NSString, NSURL, PHPhotoLibrary;

@protocol PLResourceIdentity;

@interface PHAssetResource : NSObject

{
    NSURL *_privateFileURL;
    long long _pixelWidth;
    long long _pixelHeight;
    unsigned long long _fileSize;
    _Bool _locallyAvailable;
    NSDate *_trashedDate;
    _Bool _trashed;
    PHPhotoLibrary *_photoLibrary;
    CDUnknownBlockType _privateFileLoader;
    _Bool _current;
    unsigned int _orientation;
    long long _type;
    NSString *_assetLocalIdentifier;
    NSString *_uniformTypeIdentifier;
    NSString *_originalFilename;
    id <PLResourceIdentity> _backingResourceIdentity;
    NSManagedObjectID *_assetObjectID;
    unsigned long long _cplResourceType;
}

@property (nonatomic, readonly) NSURL *privateFileURL;
@property (copy, nonatomic, readonly) CDUnknownBlockType privateFileLoader;
@property (nonatomic, readonly) long long pixelWidth;
@property (nonatomic, readonly) long long pixelHeight;
@property (nonatomic, readonly) long long analysisType;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) NSDate *trashedDate;
@property (nonatomic, readonly, getter=isTrashed) _Bool trashed;
@property (nonatomic, readonly, getter=isLocallyAvailable) _Bool locallyAvailable;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) id <PLResourceIdentity> backingResourceIdentity;
@property (nonatomic, readonly) NSManagedObjectID *assetObjectID;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) unsigned long long cplResourceType;
@property (nonatomic, getter=isLocallyAvailable) _Bool locallyAvailable;
@property (retain, nonatomic) NSURL *privateFileURL;
@property (nonatomic, readonly, getter=isCurrent) _Bool current;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *assetLocalIdentifier;
@property (copy, nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (copy, nonatomic, readonly) NSString *originalFilename;

+ (id)assetResourcesForAsset:(id)arg1;
+ (id)assetResourcesForLivePhoto:(id)arg1;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(_Bool)arg2;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(_Bool)arg2 includeMetadata:(_Bool)arg3;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(_Bool)arg2 includeMetadata:(_Bool)arg3 includeAdjustmentOverflowDataBlob:(_Bool)arg4;
+ (id)assetResourceForAsset:(id)arg1 qualityClass:(id)arg2;

- (id)description;
- (id)debugDescription;
- (id)initWithResource:(id)arg1 asset:(id)arg2;
- (id)initWithType:(long long)arg1 livePhoto:(id)arg2;

@end
