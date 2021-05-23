/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <UIKit/UIDevice.h>

@interface UIDevice (TFCoreAdditions)

+ (id)tf_screenshotInstructionImageName;
+ (_Bool)tf_deviceHasFaceID;
+ (_Bool)tf_deviceHasTopPowerButton;

@end
