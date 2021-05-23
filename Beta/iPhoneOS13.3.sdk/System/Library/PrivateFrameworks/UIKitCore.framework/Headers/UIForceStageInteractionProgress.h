/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInteractionProgress.h>

@class NSObservation, NSString;

@interface UIForceStageInteractionProgress : UIInteractionProgress

{
    NSObservation *_observation;
    _Bool _completed;
    _Bool _started;
    _Bool _completesAtTargetState;
}

@property (nonatomic) _Bool completesAtTargetState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)receiveObservedValue:(id)arg1;
- (void)_reset;

@end
