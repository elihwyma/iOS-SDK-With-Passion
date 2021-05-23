/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class UIImpactFeedbackGenerator, UISelectionFeedbackGenerator;

@interface _TVREventHaptic : NSObject

{
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
}

- (void)playSelectionEventHaptic;
- (void)playImpactEventHaptic;

@end
