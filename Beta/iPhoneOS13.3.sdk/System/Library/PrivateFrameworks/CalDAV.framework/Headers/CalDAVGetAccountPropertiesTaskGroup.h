/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class CalDAVServerVersion, NSSet, NSURL;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

{
    _Bool _supportsCalendarUserSearch;
    NSURL *_delegatePrincipalURL;
    NSSet *_calendarHomes;
    NSSet *_preferredUserAddresses;
    NSURL *_inboxURL;
    NSURL *_outboxURL;
    NSURL *_dropboxURL;
    NSURL *_notificationURL;
    NSURL *_updatedPrincipalURL;
    CalDAVServerVersion *_serverVersion;
}

@property (retain, nonatomic) NSURL *delegatePrincipalURL;
@property (nonatomic, readonly) NSSet *calendarHomes;
@property (nonatomic, readonly) NSSet *preferredUserAddresses;
@property (nonatomic, readonly) NSURL *inboxURL;
@property (nonatomic, readonly) NSURL *outboxURL;
@property (nonatomic, readonly) NSURL *dropboxURL;
@property (nonatomic, readonly) NSURL *notificationURL;
@property (nonatomic, readonly) NSURL *updatedPrincipalURL;
@property (nonatomic, readonly) CalDAVServerVersion *serverVersion;
@property (nonatomic, readonly) _Bool supportsCalendarUserSearch;

- (id)description;
- (void)startTaskGroup;
- (id)userAddresses;
- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (void)processPrincipalHeaders:(id)arg1;
- (id)homeSet;
- (_Bool)forceOptionsRequest;

@end
