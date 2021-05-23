/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFeedbackGenerator.h>

@interface _UIClickFeedbackGenerator : UIFeedbackGenerator

+ (Class)_configurationClass;

- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (id)initWithCoordinateSpace:(id)arg1;
- (void)userInteractionCancelled;
- (id)_clickConfiguration;
- (void)pressedDown;
- (void)pressedUp;

@end
