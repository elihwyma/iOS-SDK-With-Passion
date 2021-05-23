/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSURL, PLManagedAsset;

@interface PHAssetCreationPhotoStreamPublishingRequest : NSObject

{
    NSURL *_fileURL;
    PLManagedAsset *_asset;
}

@property (copy, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) PLManagedAsset *asset;

@end
