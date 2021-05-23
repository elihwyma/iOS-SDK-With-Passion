/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol UIStepperControl;

@protocol UIStepperVisualElement <Swift>

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) double value;
@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;
@property (nonatomic) double stepValue;
@property (nonatomic, getter=isContinuous) _Bool continuous;
@property (nonatomic) _Bool wraps;
@property (nonatomic) _Bool autorepeat;
@property (weak, nonatomic) id <UIStepperControl> stepperControl;

+ (unsigned short)new;
+ (unsigned short)initialSize;
+ (unsigned short)initialIntrinsicSize;
+ (unsigned short)initialAlignmentRectInsets;

- (unsigned short)backgroundImageForState: /* Error: Ran out of types for this method. */;
- (unsigned short)setBackgroundImage:forState: /* Error: Ran out of types for this method. */;
- (unsigned short)beginTrackingWithTouch:withEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelTrackingWithEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)continueTrackingWithTouch:withEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)endTrackingWithTouch:withEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)sizeThatFits:forControl: /* Error: Ran out of types for this method. */;
- (unsigned short)intrinsicSizeWithinSize:forControl: /* Error: Ran out of types for this method. */;
- (unsigned short)alignmentRectInsetsForControl: /* Error: Ran out of types for this method. */;
- (unsigned short)setDividerImage:forLeftSegmentState:rightSegmentState: /* Error: Ran out of types for this method. */;
- (unsigned short)setIncrementImage:forState: /* Error: Ran out of types for this method. */;
- (unsigned short)setDecrementImage:forState: /* Error: Ran out of types for this method. */;
- (unsigned short)dividerImageForLeftSegmentState:rightSegmentState: /* Error: Ran out of types for this method. */;
- (unsigned short)incrementImageForState: /* Error: Ran out of types for this method. */;
- (unsigned short)decrementImageForState: /* Error: Ran out of types for this method. */;

@end
