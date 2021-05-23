/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <Foundation/NSObject.h>

@class NCNotificationAction, NCNotificationContent, NCNotificationOptions, NCNotificationSound, NSArray, NSDate, NSDictionary, NSSet, NSString, UNNotification;

@interface NCNotificationRequest : NSObject

{
    NSString *_sectionIdentifier;
    NSString *_notificationIdentifier;
    NSString *_threadIdentifier;
    NSString *_categoryIdentifier;
    NSSet *_subSectionIdentifiers;
    NSString *_highestPrioritySubSectionIdentifier;
    NSArray *_intentIdentifiers;
    NSArray *_peopleIdentifiers;
    NSString *_parentSectionIdentifier;
    _Bool _uniqueThreadIdentifier;
    NSDate *_timestamp;
    NSSet *_requestDestinations;
    NCNotificationContent *_content;
    NCNotificationOptions *_options;
    NSDictionary *_context;
    NSSet *_settingsSections;
    NCNotificationSound *_sound;
    NCNotificationAction *_clearAction;
    NCNotificationAction *_closeAction;
    NCNotificationAction *_defaultAction;
    NCNotificationAction *_silenceAction;
    NSDictionary *_supplementaryActions;
    UNNotification *_userNotification;
    _Bool _isCollapsedNotification;
    unsigned long long _collapsedNotificationsCount;
    NSDictionary *_sourceInfo;
    _Bool _criticalAlert;
}

@property (copy, nonatomic, readonly) NSString *sectionIdentifier;
@property (copy, nonatomic, readonly) NSString *notificationIdentifier;
@property (copy, nonatomic, readonly) NSString *threadIdentifier;
@property (copy, nonatomic, readonly) NSString *categoryIdentifier;
@property (copy, nonatomic, readonly) NSSet *subSectionIdentifiers;
@property (copy, nonatomic, readonly) NSString *highestPrioritySubSectionIdentifier;
@property (copy, nonatomic, readonly) NSArray *intentIdentifiers;
@property (copy, nonatomic, readonly) NSArray *peopleIdentifiers;
@property (copy, nonatomic, readonly) NSString *parentSectionIdentifier;
@property (nonatomic, readonly, getter=isUniqueThreadIdentifier) _Bool uniqueThreadIdentifier;
@property (nonatomic, readonly) NSDate *timestamp;
@property (copy, nonatomic, readonly) NSSet *requestDestinations;
@property (nonatomic, readonly) NCNotificationContent *content;
@property (nonatomic, readonly) NCNotificationOptions *options;
@property (copy, nonatomic, readonly) NSDictionary *context;
@property (copy, nonatomic, readonly) NSSet *settingsSections;
@property (nonatomic, readonly) NCNotificationSound *sound;
@property (nonatomic, readonly) NCNotificationAction *clearAction;
@property (nonatomic, readonly) NCNotificationAction *closeAction;
@property (nonatomic, readonly) NCNotificationAction *defaultAction;
@property (nonatomic, readonly) NCNotificationAction *silenceAction;
@property (copy, nonatomic, readonly) NSDictionary *supplementaryActions;
@property (nonatomic, readonly) UNNotification *userNotification;
@property (nonatomic, readonly) _Bool isCollapsedNotification;
@property (nonatomic, readonly) unsigned long long collapsedNotificationsCount;
@property (copy, nonatomic, readonly) NSDictionary *sourceInfo;
@property (nonatomic, readonly, getter=isCriticalAlert) _Bool criticalAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)notificationRequest;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 title:(id)arg4 message:(id)arg5 timestamp:(id)arg6 destinations:(id)arg7;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 subSectionIds:(id)arg4 title:(id)arg5 message:(id)arg6 timestamp:(id)arg7 destinations:(id)arg8 options:(id)arg9;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 title:(id)arg4 message:(id)arg5 timestamp:(id)arg6 destination:(id)arg7;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 requestDestination:(id)arg3;
+ (id)notificationRequestWithSectionId:(id)arg1 threadId:(id)arg2 notificationId:(id)arg3 requestDestinations:(id)arg4;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 timestamp:(id)arg4;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 timestamp:(id)arg3;
+ (id)notificationRequestWithThreadId:(id)arg1 timestamp:(id)arg2;
+ (id)notificationRequestWithNotificationId:(id)arg1 threadId:(id)arg2 timestamp:(id)arg3;
+ (id)notificationRequestWithNotificationId:(id)arg1 timestamp:(id)arg2;
+ (id)notificationRequestWithTimestamp:(id)arg1;
+ (id)notificationRequestWithNotificationId:(id)arg1;
+ (id)notificationRequestWithNotificationId:(id)arg1 lockScreenPriority:(unsigned long long)arg2 lockScreenPersistence:(unsigned long long)arg3;
+ (id)notificationRequestWithNotificationId:(id)arg1 requestDestinations:(id)arg2 isCritical:(_Bool)arg3;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 subSectionIds:(id)arg3 requestDestinations:(id)arg4;
+ (id)notificationRequestWithSectionId:(id)arg1 threadId:(id)arg2 notificationId:(id)arg3 requestDestination:(id)arg4;
+ (id)notificationRequestWithRequestDestination:(id)arg1;
+ (id)notificationRequestWithRequestDestinations:(id)arg1;
+ (id)notificationRequestWithSectionId:(id)arg1 threadId:(id)arg2;
+ (id)notificationRequestWithSectionId:(id)arg1;
+ (id)notificationRequestWithThreadId:(id)arg1;
+ (id)notificationRequestWithNotificationId:(id)arg1 sectionId:(id)arg2 threadId:(id)arg3;
+ (id)notificationRequestWithNotificationId:(id)arg1 threadId:(id)arg2;
+ (id)notificationRequestWithActionWithId:(id)arg1 runner:(id)arg2;
+ (id)notificationRequestWithNotificationId:(id)arg1 lockScreenPriority:(unsigned long long)arg2;
+ (id)notificationRequestWithNotificationId:(id)arg1 requestDestinations:(id)arg2;
+ (id)notificationRequestWithSectionId:(id)arg1 subSectionIds:(id)arg2;
+ (id)notificationRequestWithNotificationId:(id)arg1 requestDestinations:(id)arg2 lockScreenPersistence:(unsigned long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)matchesRequest:(id)arg1;
- (id)loggingDescription;
- (id)initWithNotificationRequest:(id)arg1;
- (_Bool)isCollapsibleWithNotificationRequest:(id)arg1;
- (_Bool)matchesThreadForRequest:(id)arg1;
- (id)_actionsLoggingDescription;
- (id)_actionsDescriptionForEnvironment:(id)arg1;

@end
