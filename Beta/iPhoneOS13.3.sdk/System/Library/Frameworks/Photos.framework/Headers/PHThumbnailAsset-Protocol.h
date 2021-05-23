/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@class NSManagedObjectID, PHPhotoLibrary;

@protocol PHThumbnailAsset <Swift>

@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned long long thumbnailIndex;
@property (nonatomic, readonly) _Bool complete;
@property (nonatomic, readonly) long long cloudPlaceholderKind;

@end
