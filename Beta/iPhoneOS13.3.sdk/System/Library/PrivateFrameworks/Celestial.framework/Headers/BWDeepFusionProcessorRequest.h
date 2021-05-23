/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWDeepFusionProcessorInput, DeepFusionOutput;

@protocol BWDeepFusionProcessorControllerDelegate;

@interface BWDeepFusionProcessorRequest : NSObject

{
    BWDeepFusionProcessorInput *_input;
    DeepFusionOutput *_output;
    id <BWDeepFusionProcessorControllerDelegate> _delegate;
    int _err;
}

@property (nonatomic) int err;
@property (nonatomic, readonly) BWDeepFusionProcessorInput *input;
@property (nonatomic, readonly) DeepFusionOutput *output;
@property (nonatomic, readonly) id <BWDeepFusionProcessorControllerDelegate> delegate;

- (void)dealloc;
- (id)description;
- (_Bool)receivedAllInferences;
- (id)initWithInput:(id)arg1 output:(id)arg2 delegate:(id)arg3;
- (_Bool)receivedAllBuffers;

@end
