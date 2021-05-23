/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <UIKit/UITapGestureRecognizer.h>

@interface AXProgramaticUITapGestureRecognizer : UITapGestureRecognizer

{
    long long _axProgramaticState;
}

@property (nonatomic) long long axProgramaticState;

- (long long)state;

@end
