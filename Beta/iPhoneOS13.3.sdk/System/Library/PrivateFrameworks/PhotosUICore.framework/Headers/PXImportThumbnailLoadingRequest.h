/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PHImportAssetDataRequest, PXImportItemViewModel;

@interface PXImportThumbnailLoadingRequest : NSObject

{
    PXImportItemViewModel *_importItem;
    long long _requestID;
    unsigned long long _requestSize;
    CDUnknownBlockType _completionBlock;
    PHImportAssetDataRequest *_assetDataRequest;
}

@property (weak, nonatomic, readonly) PXImportItemViewModel *importItem;
@property (nonatomic, readonly) long long requestID;
@property (nonatomic, readonly) unsigned long long requestSize;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionBlock;
@property (retain) PHImportAssetDataRequest *assetDataRequest;

- (id)initWithImportItem:(id)arg1 requestID:(long long)arg2 requestSize:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
