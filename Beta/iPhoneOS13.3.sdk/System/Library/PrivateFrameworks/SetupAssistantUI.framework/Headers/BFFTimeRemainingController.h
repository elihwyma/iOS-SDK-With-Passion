/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <OnBoardingKit/OBSetupAssistantProgressController.h>

@class NSDateComponentsFormatter;

@interface BFFTimeRemainingController : OBSetupAssistantProgressController

{
    NSDateComponentsFormatter *_durationFormatter;
}

@property (retain) NSDateComponentsFormatter *durationFormatter;

- (id)initWithTitle:(id)arg1;
- (id)timeRemainingString:(double)arg1;
- (void)setTimeRemainingEstimate:(double)arg1;

@end
