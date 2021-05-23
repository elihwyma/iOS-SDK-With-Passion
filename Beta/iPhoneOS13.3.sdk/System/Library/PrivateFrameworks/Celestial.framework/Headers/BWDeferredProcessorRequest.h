/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWDeferredProcessorControllerInput, FigWeakReference;

@protocol BWDeferredProcessorControllerDelegate;

@interface BWDeferredProcessorRequest : NSObject

{
    BWDeferredProcessorControllerInput *_input;
    FigWeakReference *_delegateStorage;
    int _err;
}

@property (nonatomic) int err;
@property (nonatomic, readonly) BWDeferredProcessorControllerInput *input;
@property (nonatomic, readonly) id <BWDeferredProcessorControllerDelegate> delegate;

- (void)dealloc;
- (id)description;
- (id)initWithInput:(id)arg1 delegate:(id)arg2;

@end
