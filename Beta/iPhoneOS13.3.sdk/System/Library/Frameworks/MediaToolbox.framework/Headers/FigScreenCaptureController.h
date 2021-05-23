/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h>

@protocol FigScreenCaptureFrameHandlerDelegate;

@interface FigScreenCaptureController : NSObject

{
    id <FigScreenCaptureFrameHandlerDelegate> _delegateWeak;
    struct OpaqueFigVirtualDisplaySession *_session;
    struct OpaqueFigSimpleMutex *_lock;
    struct CGSize _size;
    CDStruct_1b6d18a9 _minIntervalBetweenFrames;
}

@property (nonatomic) struct OpaqueFigVirtualDisplaySession *session;
@property (nonatomic) struct OpaqueFigSimpleMutex *lock;
@property (nonatomic) struct CGSize size;
@property (nonatomic) CDStruct_1b6d18a9 minIntervalBetweenFrames;
@property (weak, nonatomic) id <FigScreenCaptureFrameHandlerDelegate> delegate;

+ (id)screenCaptureControllerWithSize:(struct CGSize)arg1 minIntervalBetweenFrames:(CDStruct_1b6d18a9)arg2;

- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 minIntervalBetweenFrames:(CDStruct_1b6d18a9)arg2;
- (void)stopCapture;
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 sourceRect:(struct CGRect)arg2 destRect:(struct CGRect)arg3 transform:(unsigned int)arg4;
- (void)startCapture;

@end
