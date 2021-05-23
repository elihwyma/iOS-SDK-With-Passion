/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <Foundation/NSObject.h>

@class UISelectionFeedbackGenerator;

@interface CEKSelectionFeedbackGenerator : NSObject

{
    unsigned int __endStopSoundID;
    unsigned int __majorTickSoundID;
    unsigned int __minorTickSoundID;
    unsigned int __overscrollTickSoundID;
    UISelectionFeedbackGenerator *__feedbackGenerator;
}

@property (nonatomic, readonly) UISelectionFeedbackGenerator *_feedbackGenerator;
@property (nonatomic, readonly) unsigned int _endStopSoundID;
@property (nonatomic, readonly) unsigned int _majorTickSoundID;
@property (nonatomic, readonly) unsigned int _minorTickSoundID;
@property (nonatomic, readonly) unsigned int _overscrollTickSoundID;

- (id)init;
- (void)dealloc;
- (void)prepareFeedback;
- (void)performFeedback;
- (void)playMinorTickSound;
- (void)playMajorTickSound;
- (void)playEndTickSound;
- (void)playOverscrollTickSound;

@end
