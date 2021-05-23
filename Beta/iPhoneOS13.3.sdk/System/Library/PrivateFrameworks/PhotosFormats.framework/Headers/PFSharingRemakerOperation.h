/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, PFPhotoSharingOperation, PFVideoSharingOperation;

@interface PFSharingRemakerOperation : NSObject

{
    long long _inputType;
    NSURL *_imageOutputURL;
    NSURL *_videoOutputURL;
    NSString *__uuid;
    PFVideoSharingOperation *__videoOperation;
    PFPhotoSharingOperation *__imageOperation;
}

@property (copy, nonatomic, setter=_setUUID:) NSString *_uuid;
@property (nonatomic, setter=_setInputType:) long long inputType;
@property (retain, nonatomic, setter=_setVideoOperation:) PFVideoSharingOperation *_videoOperation;
@property (retain, nonatomic, setter=_setImageOperation:) PFPhotoSharingOperation *_imageOperation;
@property (copy, nonatomic, setter=_setImageOutputURL:) NSURL *imageOutputURL;
@property (copy, nonatomic, setter=_setVideoOutputURL:) NSURL *videoOutputURL;

+ (id)remakerOperationWithInputType:(long long)arg1 videoURL:(id)arg2 imageURL:(id)arg3 adjustmentData:(id)arg4;

- (id)init;

@end
