/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class NSSet;

@protocol HUQuickControlContentCharacteristicWritingDelegate;

@protocol HUQuickControlContentCharacteristicWriting <Swift>

@property (weak, nonatomic) id <HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate;
@property (copy, nonatomic, readonly) NSSet *affectedCharacteristics;

- (unsigned short)overrideValueForCharacteristic: /* Error: Ran out of types for this method. */;

@end
