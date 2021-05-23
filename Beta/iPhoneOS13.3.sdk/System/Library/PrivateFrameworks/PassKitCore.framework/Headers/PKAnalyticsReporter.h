/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSData, RTCReporting, RTCSecureHierarchyToken;

@interface PKAnalyticsReporter : NSObject

{
    NSData *_archivedSessionToken;
    RTCReporting *_session;
    RTCSecureHierarchyToken *_sessionToken;
    struct os_unfair_lock_s _lockArchive;
}

+ (id)subjectToReportDashboardAnalyticsForPass:(id)arg1;
+ (void)subject:(id)arg1 sendEvent:(id)arg2;
+ (id)subjectToReportDashboardAnalyticsForAccount:(id)arg1;
+ (void)reportDashboardEventIfNecessary:(id)arg1 forPass:(id)arg2;
+ (id)subjectDictionary;
+ (id)reporterForSubject:(id)arg1;
+ (void)beginSubjectReporting:(id)arg1;
+ (void)beginSubjectReporting:(id)arg1 withArchivedParent:(id)arg2;
+ (void)endSubjectReporting:(id)arg1;
+ (void)subjects:(id)arg1 sendEvent:(id)arg2;
+ (void)sendSingularEvent:(id)arg1;
+ (id)archivedSessionTokenForSubject:(id)arg1;

- (void)sendEvent:(id)arg1;
- (id)initWithSubject:(id)arg1;
- (id)initWithArchivedParent:(id)arg1 subject:(id)arg2;
- (id)archivedSessionToken;
- (id)initWithParentToken:(id)arg1 subject:(id)arg2;
- (id)initWithParent:(id)arg1 subject:(id)arg2;

@end
