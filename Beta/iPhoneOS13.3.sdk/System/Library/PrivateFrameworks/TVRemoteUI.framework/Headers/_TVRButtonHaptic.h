/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@protocol UIFeedbackGeneratorUserInteractionDriven;

@interface _TVRButtonHaptic : NSObject

{
    id <UIFeedbackGeneratorUserInteractionDriven> _behavior;
}

@property (retain, nonatomic) id <UIFeedbackGeneratorUserInteractionDriven> behavior;

+ (id)hapticForView:(id)arg1;

- (void)userInteractionEnded;
- (void)userInteractionCancelled;
- (void)userInteractionBegan;

@end
