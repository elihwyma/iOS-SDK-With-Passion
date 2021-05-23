/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWRedEyeReductionControllerInput;

@protocol BWStillImageProcessorControllerDelegate;

@interface BWRedEyeReductionRequest : NSObject

{
    BWRedEyeReductionControllerInput *_input;
    id <BWStillImageProcessorControllerDelegate> _delegate;
    int _mode;
}

@property (nonatomic, readonly) BWRedEyeReductionControllerInput *input;
@property (nonatomic, readonly) id <BWStillImageProcessorControllerDelegate> delegate;
@property (nonatomic) int mode;

- (void)dealloc;
- (id)description;
- (id)initWithInput:(id)arg1 delegate:(id)arg2;

@end
