/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface PUReviewAdjustmentInput : NSObject

{
    UIImage *_currentPreviewImage;
    NSData *_knownAdjustmentData;
    long long _adjustmentBaseVersion;
    NSURL *_baseImageFileURL;
    NSURL *_baseVideoFileURL;
}

@property (retain, nonatomic, setter=_setCurrentPreviewImage:) UIImage *currentPreviewImage;
@property (retain, nonatomic, setter=_setKnownAdjustmentData:) NSData *knownAdjustmentData;
@property (nonatomic, setter=_setBaseImageVersion:) long long adjustmentBaseVersion;
@property (nonatomic, setter=_setBaseImageFileURL:) NSURL *baseImageFileURL;
@property (nonatomic, setter=_setBaseVideoFileURL:) NSURL *baseVideoFileURL;

@end
