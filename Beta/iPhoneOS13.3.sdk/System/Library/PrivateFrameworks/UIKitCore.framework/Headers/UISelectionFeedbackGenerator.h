/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UISelectionFeedbackGeneratorConfiguration;

@interface UISelectionFeedbackGenerator : UIFeedbackGenerator

{
    double _lastSelectionChangeTime;
}

@property (nonatomic) double lastSelectionChangeTime;
@property (nonatomic, readonly, getter=_selectionConfiguration) _UISelectionFeedbackGeneratorConfiguration *selectionConfiguration;

+ (Class)_configurationClass;

- (void)selectionChanged;
- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (void)userInteractionCancelled;
- (void)_deactivated;
- (id)_stats_key;
- (void)_playFeedbackWithSpeed:(double)arg1;

@end
