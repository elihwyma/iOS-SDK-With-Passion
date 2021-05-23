/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/CalDAVConcreteServerVersion.h>

@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (id)init;
- (id)type;
- (_Bool)requiresOpeningAttachmentAsLink;
- (_Bool)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
- (id)supportedCalendarComponentSets;

@end
