/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSData, NSManagedObjectID;

@interface PXThumbnailCacheEntry : NSObject

{
    NSManagedObjectID *_objectID;
    NSData *_data;
    struct PHAssetResourceTableDataSpecification _dataSpec;
}

@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) struct PHAssetResourceTableDataSpecification dataSpec;
@property (nonatomic, readonly) NSData *data;

- (id)initWithObjectID:(id)arg1 dataSpec:(const struct PHAssetResourceTableDataSpecification *)arg2 data:(id)arg3;

@end
