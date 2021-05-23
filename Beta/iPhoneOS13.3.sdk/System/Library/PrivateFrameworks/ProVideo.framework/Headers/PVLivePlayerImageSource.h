/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString, PVFrameSet;

@interface PVLivePlayerImageSource : NSObject

{
    PVFrameSet *_imageFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithURL:(id)arg1;
- (void)pause;
- (void)play;
- (void)setMuted:(_Bool)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)itemTimeForHostTime:(double)arg1;
- (id)initWithPVImageBuffer:(id)arg1;
- (id)imageBufferForHostTime:(double)arg1;
- (id)initWithUImage:(id)arg1;

@end
