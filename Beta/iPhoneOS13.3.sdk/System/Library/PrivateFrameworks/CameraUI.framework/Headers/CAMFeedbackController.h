/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, UISelectionFeedbackGenerator, _UIButtonFeedbackGenerator;

@interface CAMFeedbackController : NSObject

{
    UISelectionFeedbackGenerator *__modeSelectionFeedbackGenerator;
    UISelectionFeedbackGenerator *__burstCountFeedbackGenerator;
    _UIButtonFeedbackGenerator *__shutterButtonLatchingOnFeedbackGenerator;
    _UIButtonFeedbackGenerator *__shutterButtonLatchingOffFeedbackGenerator;
    _UIButtonFeedbackGenerator *__shutterButtonMomentaryFeedbackGenerator;
    NSMutableSet *__activePairedFeedbackGenerators;
}

@property (nonatomic, readonly) UISelectionFeedbackGenerator *_modeSelectionFeedbackGenerator;
@property (nonatomic, readonly) UISelectionFeedbackGenerator *_burstCountFeedbackGenerator;
@property (nonatomic, readonly) _UIButtonFeedbackGenerator *_shutterButtonLatchingOnFeedbackGenerator;
@property (nonatomic, readonly) _UIButtonFeedbackGenerator *_shutterButtonLatchingOffFeedbackGenerator;
@property (nonatomic, readonly) _UIButtonFeedbackGenerator *_shutterButtonMomentaryFeedbackGenerator;
@property (nonatomic, readonly) NSMutableSet *_activePairedFeedbackGenerators;

- (id)init;
- (id)_feedbackGeneratorForDiscreteFeedback:(unsigned long long)arg1;
- (id)_feedbackGeneratorForPairedFeedback:(unsigned long long)arg1;
- (id)_debugStringForPairedFeedback:(unsigned long long)arg1;
- (void)prepareDiscreteFeedback:(unsigned long long)arg1;
- (void)performDiscreteFeedback:(unsigned long long)arg1;
- (void)prepareButtonFeedback:(unsigned long long)arg1;
- (void)performPressButtonFeedback:(unsigned long long)arg1;
- (void)performReleaseButtonFeedback:(unsigned long long)arg1;

@end
