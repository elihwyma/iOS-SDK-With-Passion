/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class CUShutterButton, NSMutableSet, _UIButtonFeedbackGenerator;

@interface CFXFeedbackController : NSObject

{
    _UIButtonFeedbackGenerator *__shutterButtonLatchingOnFeedbackGenerator;
    _UIButtonFeedbackGenerator *__shutterButtonLatchingOffFeedbackGenerator;
    _UIButtonFeedbackGenerator *__shutterButtonMomentaryFeedbackGenerator;
    NSMutableSet *__activePairedFeedbackGenerators;
    CUShutterButton *_shutterButton;
    unsigned long long _feedbackToPerform;
}

@property (nonatomic, readonly) _UIButtonFeedbackGenerator *_shutterButtonLatchingOnFeedbackGenerator;
@property (nonatomic, readonly) _UIButtonFeedbackGenerator *_shutterButtonLatchingOffFeedbackGenerator;
@property (nonatomic, readonly) _UIButtonFeedbackGenerator *_shutterButtonMomentaryFeedbackGenerator;
@property (nonatomic, readonly) NSMutableSet *_activePairedFeedbackGenerators;
@property (nonatomic, readonly) CUShutterButton *shutterButton;
@property (nonatomic) unsigned long long feedbackToPerform;

- (id)init;
- (id)_feedbackGeneratorForPairedFeedback:(unsigned long long)arg1;
- (id)_debugStringForPairedFeedback:(unsigned long long)arg1;
- (void)prepareButtonFeedback:(unsigned long long)arg1;
- (void)performPressButtonFeedback:(unsigned long long)arg1;
- (void)performReleaseButtonFeedback:(unsigned long long)arg1;
- (id)initWithShutterButton:(id)arg1;
- (void)shutterButtonDown:(id)arg1;
- (void)shutterButtonUp:(id)arg1;
- (unsigned long long)shutterButtonFeedbackForCurrentConfiguration;

@end
