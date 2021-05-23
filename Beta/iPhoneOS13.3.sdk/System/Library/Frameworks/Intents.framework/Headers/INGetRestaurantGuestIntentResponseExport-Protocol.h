/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INRestaurantGuest, INRestaurantGuestDisplayPreferences;

@protocol INGetRestaurantGuestIntentResponseExport <Swift>

@property (copy, nonatomic) INRestaurantGuest *guest;
@property (copy, nonatomic) INRestaurantGuestDisplayPreferences *guestDisplayPreferences;
@property (nonatomic, readonly) long long code;

- (unsigned short)init;

@end
