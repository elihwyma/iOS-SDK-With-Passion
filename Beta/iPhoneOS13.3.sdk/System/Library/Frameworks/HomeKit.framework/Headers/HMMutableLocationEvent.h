/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMLocationEvent.h>

@class CLRegion;

@interface HMMutableLocationEvent : HMLocationEvent

@property (retain, nonatomic) CLRegion *region;

@end
