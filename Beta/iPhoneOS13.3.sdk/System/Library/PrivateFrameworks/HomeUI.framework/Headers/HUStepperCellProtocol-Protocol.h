/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class NSNumber;

@protocol HUStepperCellDelegate;

@protocol HUStepperCellProtocol <Swift>

@property (weak, nonatomic) id <HUStepperCellDelegate> stepperCellDelegate;
@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *maximumValue;
@property (copy, nonatomic) NSNumber *stepValue;
@property (copy, nonatomic) NSNumber *stepperValue;

@end
