/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <IMSharedUI/IMTypingIndicatorLayer.h>

@interface DTSTypingIndicatorLayer : IMTypingIndicatorLayer

+ (struct CGRect)iconImageFrame;
+ (struct UIColor *)defaultThinkingDotColor;
+ (struct UIColor *)defaultBubbleColor;
+ (double)iconImageLeadingSpace;

- (id)init;
- (id)iconImage;

@end
