/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface ISExportDestination : NSObject

{
    NSURL *_photoURL;
    NSURL *_videoURL;
}

@property (readonly) NSURL *photoURL;
@property (readonly) NSURL *videoURL;

+ (id)destinationWithPhotoURL:(id)arg1 videoURL:(id)arg2;

- (id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2;

@end
