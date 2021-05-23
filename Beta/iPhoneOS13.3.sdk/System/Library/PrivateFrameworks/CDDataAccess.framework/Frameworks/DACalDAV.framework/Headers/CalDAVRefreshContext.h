/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@class CalDAVDBChangeTrackingHelper, NSError;

@interface CalDAVRefreshContext : NSObject

{
    _Bool _isForced;
    _Bool _wasUserRequested;
    _Bool _wasDueToPush;
    _Bool _isDisabledAccount;
    _Bool _isCalendarsOnly;
    _Bool _didDownloadEvents;
    _Bool _didSaveDatabase;
    _Bool _shouldSave;
    _Bool _shouldSaveAccounts;
    _Bool _calendarFailedToSync;
    _Bool _shouldRetry;
    int _retryTime;
    double _startTime;
    unsigned long long _numDownloadedElements;
    unsigned long long _numUploadedElements;
    NSError *_error;
    unsigned long long _localItems;
    CalDAVDBChangeTrackingHelper *_changeTracker;
}

@property (nonatomic) _Bool isForced;
@property (nonatomic) _Bool wasUserRequested;
@property (nonatomic) _Bool wasDueToPush;
@property (nonatomic) _Bool isDisabledAccount;
@property (nonatomic) _Bool isCalendarsOnly;
@property (nonatomic) _Bool didDownloadEvents;
@property (nonatomic) _Bool didSaveDatabase;
@property (nonatomic) _Bool shouldSave;
@property (nonatomic) _Bool shouldSaveAccounts;
@property (nonatomic) _Bool calendarFailedToSync;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long numDownloadedElements;
@property (nonatomic) unsigned long long numUploadedElements;
@property (nonatomic) _Bool shouldRetry;
@property (nonatomic) int retryTime;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long localItems;
@property (retain, nonatomic) CalDAVDBChangeTrackingHelper *changeTracker;

+ (id)defaultContext;

@end
