/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWStillImageOverCaptureProcessorInput;

@protocol BWStillImageProcessorControllerDelegate;

@interface BWStillImageOverCaptureProcessorRequest : NSObject

{
    BWStillImageOverCaptureProcessorInput *_input;
    id <BWStillImageProcessorControllerDelegate> _delegate;
    int _err;
}

@property (nonatomic) int err;
@property (nonatomic, readonly) BWStillImageOverCaptureProcessorInput *input;
@property (nonatomic, readonly) id <BWStillImageProcessorControllerDelegate> delegate;

- (void)dealloc;
- (id)description;
- (_Bool)receivedAllBuffers;
- (id)initWithInput:(id)arg1 delegate:(id)arg2;

@end
