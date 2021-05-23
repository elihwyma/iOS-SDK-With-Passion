/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

@interface CHHapticEngine : NSObject

+ (_Bool)supports1stPartyHaptics;
+ (id)capabilitiesForHardware;

@end
