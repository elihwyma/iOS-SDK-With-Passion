/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSKeyedUnarchiver.h>

@class PHPhotoLibrary;

@interface PHMemoryFeatureDecoder : NSKeyedUnarchiver

{
    PHPhotoLibrary *_photoLibrary;
}

@property (retain) PHPhotoLibrary *photoLibrary;

@end
