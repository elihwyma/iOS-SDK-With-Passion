/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMPresenceEvent.h>

@class NSArray, NSString;

@interface HMMutablePresenceEvent : HMPresenceEvent

@property (copy, nonatomic) NSString *presenceType;
@property (retain, nonatomic) NSArray *users;
@property (nonatomic) unsigned long long presenceEventType;
@property (nonatomic) unsigned long long presenceUserType;

@end
