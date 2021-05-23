/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@class _UIFeedback;

@protocol _UIFeedbackDiscretePlayable;

@interface _UISelectionFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_feedback;
    double _minimumInterval;
    double _maxSpeed;
    double _slowAudioVolume;
    double _fastAudioVolume;
    double _slowHapticVolume;
    double _fastHapticVolume;
}

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback;
@property (nonatomic) double minimumInterval;
@property (nonatomic) double maxSpeed;
@property (nonatomic) double slowAudioVolume;
@property (nonatomic) double fastAudioVolume;
@property (nonatomic) double slowHapticVolume;
@property (nonatomic) double fastHapticVolume;

+ (id)defaultConfiguration;
+ (id)lightConfiguration;
+ (id)strongConfiguration;
+ (id)pickerConfiguration;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)feedbackKeyPaths;

@end
