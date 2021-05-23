/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/Swift-Protocol.h>

@protocol AVQueuedSampleBufferRendering <Swift>

@property (retain, readonly) struct OpaqueCMTimebase *timebase;
@property (readonly, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;

- (unsigned short)flush;
- (unsigned short)enqueueSampleBuffer: /* Error: Ran out of types for this method. */;
- (unsigned short)stopRequestingMediaData;
- (unsigned short)requestMediaDataWhenReadyOnQueue:usingBlock: /* Error: Ran out of types for this method. */;

@end
