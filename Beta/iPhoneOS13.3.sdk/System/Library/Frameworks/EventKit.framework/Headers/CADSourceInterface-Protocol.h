/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@protocol CADSourceInterface

- (unsigned short)CADDatabaseGetSourcesWithFaultedProperties:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetLocalSource: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetLocalBirthdaySource: /* Error: Ran out of types for this method. */;
- (unsigned short)CADSourceGetConstraints:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADSourceGetNotificationCollection:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADSourceRefresh:isUserRequested:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADCountCalendarItemsOfType:inSource:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADRemoveCalendarItemsOlderThanDate:ofType:inSource:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADSourceGetGrantedDelegatesList:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADSourceUpdateGrantedDelegatePermission:sourceID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADSourceGetManagedConfigurationAccountAccess:reply: /* Error: Ran out of types for this method. */;

@end
