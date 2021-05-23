/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXPlacesGeotaggableMediaProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)imageForGeotaggable:(id)arg1 ofSize:(struct CGSize)arg2 networkAccessAllowed:(_Bool)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (id)_fetchImageManagerAssetForPlacesAsset:(id)arg1;

@end
