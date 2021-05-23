/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

#import <DACalDAV/Swift-Protocol.h>

@class AKAppleIDSession, CalDAVRefreshContext, MobileCalDAVAccount, NSArray, NSDateComponents, NSDictionary, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSURL;

@protocol CalDAVAccount, CoreDAVTaskManager;

@interface MobileCalDAVPrincipal : NSObject <Swift>

{
    NSMutableDictionary *_calendarUserAddressesPerCalendar;
    _Bool _calendarsAreDirty;
    _Bool _isDelegate;
    _Bool _isWritable;
    _Bool _isEnabled;
    _Bool _canCreateCalendars;
    _Bool _isExpandPropertyReportSupported;
    _Bool _supportsCalendarUserSearch;
    _Bool _supportsFreebusy;
    _Bool _supportsSyncToken;
    _Bool _supportsPush;
    _Bool _shouldRefreshPrincipalSearchProperties;
    _Bool _shouldUpdatePushDelegate;
    _Bool _isDirty;
    NSURL *_calendarHomeURL;
    NSMutableSet *_deletedCalendarURLs;
    NSURL *_notificationCollectionURL;
    NSString *_notificationCollectionCTag;
    NSURL *_inboxURL;
    NSURL *_outboxURL;
    NSURL *_dropBoxURL;
    NSURL *_defaultCalendarURL;
    NSString *_uid;
    id <CalDAVAccount> _account;
    NSSet *_preferredCalendarUserAddresses;
    NSString *_fullName;
    NSString *_principalPath;
    NSString *_inboxCTag;
    NSString *_notificationURLString;
    NSDictionary *_pushTransports;
    NSString *_calendarHomePushKey;
    NSNumber *_quotaFreeBytes;
    NSString *_supportedCalendarComponentSets;
    NSURL *_preferredCalendarUserAddress;
    NSString *_preferredCalendarEmailAddress;
    NSString *_preferredCalendarPhoneNumber;
    NSSet *_addedCalendars;
    NSSet *_modifiedCalendars;
    NSArray *_calendarChangesToClear;
    CalDAVRefreshContext *_refreshContext;
    NSURL *_legacy_principalURL;
    AKAppleIDSession *_appleIDSession;
}

@property (retain, nonatomic) NSString *uid;
@property (nonatomic) id <CalDAVAccount> account;
@property (nonatomic, readonly) MobileCalDAVAccount *daAccount;
@property (retain, nonatomic) NSURL *preferredCalendarUserAddress;
@property (retain, nonatomic) NSString *preferredCalendarEmailAddress;
@property (retain, nonatomic) NSString *preferredCalendarPhoneNumber;
@property (retain, nonatomic) NSMutableSet *deletedCalendarURLs;
@property (retain, nonatomic) NSSet *addedCalendars;
@property (retain, nonatomic) NSSet *modifiedCalendars;
@property (retain, nonatomic) NSArray *calendarChangesToClear;
@property (retain, nonatomic) CalDAVRefreshContext *refreshContext;
@property (retain, nonatomic) NSURL *legacy_principalURL;
@property (retain, nonatomic) AKAppleIDSession *appleIDSession;
@property (retain, nonatomic) NSSet *preferredCalendarUserAddresses;
@property (nonatomic, readonly) NSDictionary *calendarUserAddressesPerCalendar;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSURL *calendarHomeURL;
@property (retain, nonatomic) NSString *calendarHomeSyncToken;
@property (nonatomic, readonly) NSDictionary *subCalPropertiesByURL;
@property (retain, nonatomic) NSString *principalPath;
@property (retain, nonatomic) NSURL *principalURL;
@property (retain, nonatomic) NSURL *defaultCalendarURL;
@property (retain, nonatomic) NSURL *notificationCollectionURL;
@property (retain, nonatomic) NSString *notificationCollectionCTag;
@property (retain, nonatomic) NSURL *inboxURL;
@property (retain, nonatomic) NSString *inboxCTag;
@property (retain, nonatomic) NSURL *outboxURL;
@property (retain, nonatomic) NSURL *dropBoxURL;
@property (retain, nonatomic) NSString *notificationURLString;
@property (retain, nonatomic) NSDictionary *pushTransports;
@property (retain, nonatomic) NSString *calendarHomePushKey;
@property (retain, nonatomic) NSNumber *quotaFreeBytes;
@property (retain, nonatomic) NSString *supportedCalendarComponentSets;
@property (nonatomic) _Bool isDelegate;
@property (nonatomic) _Bool isWritable;
@property (nonatomic) _Bool isEnabled;
@property (nonatomic) _Bool canCreateCalendars;
@property (nonatomic) _Bool isExpandPropertyReportSupported;
@property (nonatomic) _Bool supportsCalendarUserSearch;
@property (nonatomic) _Bool supportsFreebusy;
@property (nonatomic) _Bool supportsSyncToken;
@property (nonatomic, readonly) _Bool supportsExtendedCalendarQuery;
@property (nonatomic, readonly) NSSet *calendars;
@property (nonatomic, readonly) NSString *APSTopic;
@property (nonatomic, readonly) NSURL *APSSubscriptionURL;
@property (nonatomic, readonly) NSString *APSEnv;
@property (nonatomic) _Bool supportsPush;
@property (nonatomic) _Bool shouldRefreshPrincipalSearchProperties;
@property (nonatomic) _Bool shouldUpdatePushDelegate;
@property (nonatomic) _Bool isDirty;
@property (nonatomic) _Bool calendarsAreDirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CoreDAVTaskManager> taskManager;
@property (nonatomic, readonly) _Bool isMergeSync;
@property (nonatomic, readonly) _Bool isEnabledForEvents;
@property (nonatomic, readonly) _Bool isEnabledForTodos;
@property (nonatomic, readonly) NSDateComponents *eventFilterStartDate;
@property (nonatomic, readonly) NSDateComponents *eventFilterEndDate;

+ (_Bool)compareAddressURL:(id)arg1 localString:(id)arg2;

- (id)init;
- (id)user;
- (id)scheme;
- (id)host;
- (long long)port;
- (id)password;
- (id)configuration;
- (_Bool)useSSL;
- (id)clientToken;
- (id)accountID;
- (id)userAgentHeader;
- (void)removeCalendar:(id)arg1;
- (id)oauth2Token;
- (id)getAppleIDSession;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 numUploadedElements:(long long)arg2;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (id)identityPersist;
- (struct __CFURLStorageSession *)copyStorageSession;
- (void)clientTokenRequestedByServer;
- (id)serverRoot;
- (id)serverComplianceClasses;
- (_Bool)handleCertificateError:(id)arg1;
- (id)additionalHeaderValues;
- (id)customConnectionProperties;
- (id)oauthInfoProvider;
- (_Bool)shouldFailAllTasks;
- (_Bool)shouldUseOpportunisticSockets;
- (_Bool)handleTrustChallenge:(id)arg1;
- (void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 inQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithConfiguration:(id)arg1 account:(id)arg2;
- (id)calendarUserAddresses;
- (_Bool)calendarUserAddressIsEquivalentToURL:(id)arg1;
- (void)noteHomeSetOnDifferentHost:(id)arg1;
- (_Bool)_userAddressSet:(id)arg1 isEqualToSet:(id)arg2;
- (id)_startDateFromDaysToSync:(int)arg1;
- (id)_eventSyncEndDate;
- (_Bool)shouldSendClientInfoHeaderForURL:(id)arg1;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)shouldHandleHTTPCookiesForURL:(id)arg1;
- (_Bool)shouldCompressRequests;
- (unsigned long long)oauthVariant;
- (id)calendarOfType:(int)arg1 atURL:(id)arg2 withOptions:(id)arg3;
- (void)removecalendarWithURL:(id)arg1;
- (void)prepareCalendarsForSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)defaultEventCalendarTitle;
- (id)defaultTodoCalendarTitle;
- (_Bool)clearCalendarChanges;
- (id)preferredCalendarUserAddressesForCalendar:(id)arg1;
- (void)removePreferredCalendarUserAddressesForCalendarWithIdentifier:(id)arg1;
- (void)setPreferredCalendarUserAddresses:(id)arg1 forCalendar:(id)arg2;
- (_Bool)hasCalendarUserAddress:(id)arg1;

@end
