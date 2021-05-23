/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class AVAsset, NSURL;

@interface PXAutoloopVideoInput : NSObject

{
    AVAsset *_asset;
    NSURL *_imageURL;
}

@property (copy, nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) NSURL *imageURL;

+ (id)inputWithAsset:(id)arg1 imageURL:(id)arg2;

- (id)initWithAsset:(id)arg1 imageURL:(id)arg2;

@end
