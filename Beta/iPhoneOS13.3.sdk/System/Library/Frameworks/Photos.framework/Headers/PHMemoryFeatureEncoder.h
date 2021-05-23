/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSKeyedArchiver.h>

@class PHPhotoLibrary;

@interface PHMemoryFeatureEncoder : NSKeyedArchiver

{
    PHPhotoLibrary *_photoLibrary;
}

@property (retain) PHPhotoLibrary *photoLibrary;

@end
