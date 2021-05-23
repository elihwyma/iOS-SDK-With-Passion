/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class ClientConnection, NSString;

@interface CADDefaultPermissionValidator : NSObject

{
    ClientConnection *_connection;
}

@property (weak, nonatomic, readonly) ClientConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (id)initWithClientConnection:(id)arg1;
- (_Bool)_valueForBooleanEntitlement:(id)arg1 defaultValue:(_Bool)arg2;

@end
