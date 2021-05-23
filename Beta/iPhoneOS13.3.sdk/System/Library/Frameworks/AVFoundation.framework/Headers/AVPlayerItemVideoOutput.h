/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemVideoOutputInternal, NSObject;

@protocol AVPlayerItemOutputPullDelegate, OS_dispatch_queue;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput

{
    AVPlayerItemVideoOutputInternal *_videoOutputInternal;
}

@property (weak, readonly) id <AVPlayerItemOutputPullDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (_Bool)hasNewPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1;
- (void)setSuppressesPlayerRendering:(_Bool)arg1;
- (id)initWithPixelBufferAttributes:(id)arg1;
- (struct __CVBuffer *)copyPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1 itemTimeForDisplay:(CDStruct_1b6d18a9 *)arg2;
- (void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg1;
- (id)_pixelBufferAttributes;
- (_Bool)suppressesPlayerRendering;
- (struct OpaqueFigVisualContext *)_visualContext;
- (_Bool)_attachToPlayerItem:(id)arg1;
- (void)_setTimebase:(struct OpaqueCMTimebase *)arg1;
- (void)_detachFromPlayerItem;
- (long long)clientStateOnRequestedMediaDataChangeNotification;
- (void)_dispatchOutputMediaDataWillChange;
- (_Bool)setUpWithOutputSettings:(id)arg1 outputSettingsArePixelBufferAttributes:(_Bool)arg2 withExceptionReason:(id *)arg3;
- (void)_respondToPlayerItemFormatDescriptionsChange;
- (struct __CVBuffer *)_copyPixelBufferForItemTimeWithOptions:(CDStruct_1b6d18a9)arg1 itemTimeForDisplay:(CDStruct_1b6d18a9 *)arg2 options:(unsigned int)arg3;
- (void)_stopObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase *)arg1;
- (void)_startObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase *)arg1;
- (id)initWithOutputSettings:(id)arg1;
- (CDStruct_1b6d18a9)earliestAvailablePixelBufferItemTime;
- (void)requestNotificationOfMediaDataChangeAsSoonAsPossible;
- (struct __CVBuffer *)copyPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1 remove:(_Bool)arg2 itemTimeForDisplay:(CDStruct_1b6d18a9 *)arg3;
- (void)_setTagBuffersWithConversionInformation;
- (void)_dispatchOutputSequenceWasFlushed;

@end
