/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/Swift-Protocol.h>

@protocol CADPermissionValidator <Swift>

@property (readonly) _Bool canModifySuggestedEventCalendar;
@property (readonly) _Bool canMakeSpotlightChanges;
@property (readonly) _Bool canModifyBirthdayCalendar;
@property (readonly) _Bool canModifyCalendarDatabase;
@property (readonly) _Bool testingAccessLevelGranted;
@property (readonly) _Bool internalAccessLevelGranted;
@property (readonly) _Bool hasContactsUIEntitlement;
@property (readonly) _Bool hasMigrationEntitlement;
@property (readonly) _Bool hasSyncClientEntitlement;
@property (readonly) _Bool hasCalendarToolEntitlement;
@property (readonly) _Bool hasChangeIdTrackingOverrideEntitlement;
@property (readonly) _Bool hasManagedConfigurationBundleIDOverrideEntitlement;
@property (readonly) _Bool shouldTrustClientEnforcedManagedConfigurationAccess;
@property (readonly) _Bool hasNotificationCountEntitlement;

@end
