/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFeedbackGenerator.h>

__attribute__((visibility("hidden")))
@interface _UIClickPresentationFeedbackGenerator : UIFeedbackGenerator

+ (Class)_configurationClass;

- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (id)initWithCoordinateSpace:(id)arg1;
- (void)popped;
- (void)userInteractionCancelled;
- (id)_clickConfiguration;
- (void)previewed;
- (void)dragged;

@end
