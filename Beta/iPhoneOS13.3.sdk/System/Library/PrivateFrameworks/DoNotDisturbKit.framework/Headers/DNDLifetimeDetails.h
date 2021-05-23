/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
 */

#import <Foundation/NSObject.h>

@interface DNDLifetimeDetails : NSObject

+ (id)lifetimeDetailsForPlaceInference:(id)arg1;
+ (id)lifetimeDetailsForEvent:(id)arg1 relativeToDate:(id)arg2;
+ (id)lifetimeDetailsForOneHour;
+ (id)lifetimeDetailsUntilEvening;
+ (id)lifetimeDetailsUntilMorning;

@end
