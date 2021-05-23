/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADOperationGroup.h>

__attribute__((visibility("hidden")))
@interface CADSpotlightOperationGroup : CADOperationGroup

+ (_Bool)requiresEventAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventOrReminderAccess;
+ (id)whitelistedBundles;

- (void)CADPushItemsToSpotlight:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)accessGrantedToPerformSelector:(SEL)arg1;
- (id)_gatherAllCalendarItemUUIDs;

@end
