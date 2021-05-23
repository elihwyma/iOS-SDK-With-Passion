/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXCMMAssetPreparationOptions : NSObject

{
    _Bool _publishAsOriginal;
    _Bool _publishLivePhotoAsStill;
}

@property (nonatomic) _Bool publishAsOriginal;
@property (nonatomic) _Bool publishLivePhotoAsStill;

- (id)init;

@end
