/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorInput.h>

@class BWDeferredProcessingContainer, BWDeferredProcessorController, NSString;

@interface BWDeferredProcessorControllerInput : BWStillImageProcessorInput

{
    BWDeferredProcessorController *_processorController;
    BWDeferredProcessingContainer *_container;
    NSString *_photoIdentifier;
}

@property (nonatomic) BWDeferredProcessorController *processorController;
@property (nonatomic, readonly) BWDeferredProcessingContainer *container;
@property (nonatomic, readonly) NSString *photoIdentifier;

- (void)dealloc;
- (void)setContainer:(id)arg1 photoIdentifier:(id)arg2;

@end
