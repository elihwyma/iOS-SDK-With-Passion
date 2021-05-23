/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHCompositeMediaResult.h>

@class NSURL;

@interface PHVideoResult : PHCompositeMediaResult

{
    NSURL *_videoURL;
}

@property (retain, nonatomic) NSURL *videoURL;

- (_Bool)containsValidData;
- (id)videoAdjustmentData;
- (void)setVideoAdjustmentData:(id)arg1;

@end
