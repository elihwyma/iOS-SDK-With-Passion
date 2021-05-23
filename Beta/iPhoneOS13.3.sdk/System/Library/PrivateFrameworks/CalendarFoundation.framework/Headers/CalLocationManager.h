/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@interface CalLocationManager : NSObject

+ (void)_loadMapKit;
+ (id)currentLocationWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (_Bool)isCurrentProcessEntitledToUseLocationServices;
+ (id)placemarkForLocation:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (id)placemarkForAddress:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (id)strictGeocodeString:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end
