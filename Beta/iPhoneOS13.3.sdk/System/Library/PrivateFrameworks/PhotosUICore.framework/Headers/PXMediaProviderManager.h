/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface PXMediaProviderManager : NSObject

{
    NSMapTable *_imageProviderByClass;
}

+ (id)defaultManager;

- (id)init;
- (id)imageProviderForAsset:(id)arg1;

@end
