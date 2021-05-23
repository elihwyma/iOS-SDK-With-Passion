/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Photos/PHFetchResult.h>

@class NSString;

@protocol PXDisplayAsset;

@interface PHFetchResult (PXDisplayAssetAdoption)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) id <PXDisplayAsset> firstObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long count;

- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;

@end
