/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMSignificantTimeEvent.h>

@class NSDateComponents, NSString;

@interface HMMutableSignificantTimeEvent : HMSignificantTimeEvent

@property (retain, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSDateComponents *offset;

@end
