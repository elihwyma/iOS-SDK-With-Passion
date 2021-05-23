/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@interface PHResourceDownloadRequestOptions : NSObject

{
    _Bool _treatLivePhotoAsStill;
    _Bool _dontAllowRAW;
    _Bool _downloadAllAssetResources;
}

@property (nonatomic) _Bool treatLivePhotoAsStill;
@property (nonatomic) _Bool dontAllowRAW;
@property (nonatomic) _Bool downloadAllAssetResources;

- (id)description;

@end
