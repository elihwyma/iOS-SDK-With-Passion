/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWDeferredProcessingContainer, FigCaptureDeferredPhotoProcessorRequest;

@protocol FigCaptureDeferredProcessingJobDelegate;

@interface FigCaptureDeferredProcessingJob : NSObject

{
    id <FigCaptureDeferredProcessingJobDelegate> _delegate;
    BWDeferredProcessingContainer *_container;
    FigCaptureDeferredPhotoProcessorRequest *_processorRequest;
    long long _startNS;
    long long _durationNS;
}

@property (nonatomic, readonly) FigCaptureDeferredPhotoProcessorRequest *processorRequest;
@property (nonatomic, readonly) BWDeferredProcessingContainer *container;
@property (nonatomic) long long startNS;
@property (nonatomic) long long durationNS;

- (void)dealloc;
- (void)start;
- (id)initWithProcessorRequest:(id)arg1 delegate:(id)arg2 error:(int *)arg3;
- (void)completedWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)failedWithError:(int)arg1;

@end
