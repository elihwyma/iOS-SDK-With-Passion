/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface PUReviewAdjustmentOutput : NSObject

{
    NSURL *_renderedImageFileURL;
    NSURL *_renderedVideoFileURL;
    long long __adjustmentInputBaseVersion;
    NSURL *__baseImageURL;
    NSURL *__baseVideoURL;
}

@property (retain, nonatomic, setter=_setRenderedImageFileURL:) NSURL *renderedImageFileURL;
@property (retain, nonatomic, setter=_setRenderedVideoFileURL:) NSURL *renderedVideoFileURL;
@property (nonatomic, setter=_setAdjustmentInputBaseVersion:) long long _adjustmentInputBaseVersion;
@property (retain, nonatomic, setter=_setBaseImageURL:) NSURL *_baseImageURL;
@property (retain, nonatomic, setter=_setBaseVideoURL:) NSURL *_baseVideoURL;

@end
