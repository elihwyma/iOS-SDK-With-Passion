/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class QLImageData, UIImage;

@interface QLAnimatedImage : NSObject

{
    QLImageData *_imageData;
    unsigned long long _durationsCount;
    struct QLFrameDurationInformation *_durations;
    double _duration;
    UIImage *_lastImage;
    unsigned long long _lastImageIndex;
}

- (void)dealloc;
- (double)duration;
- (unsigned long long)frameCount;
- (id)initWithImageSource:(struct CGImageSource *)arg1;
- (void)generateDurations;
- (_Bool)time:(double)arg1 belongsToIndex:(unsigned long long)arg2;
- (long long)indexForTime:(double)arg1;
- (id)frameAtTime:(double)arg1;

@end
