/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface DEDNotifierConfiguration : NSObject

{
    _Bool _userNotificationShouldPlaySound;
    _Bool _followupUseSpringboardNotification;
    NSString *_hostAppIdentifier;
    NSString *_localizedNotificationTitle;
    NSString *_localizedNotificationBody;
    NSString *_reviewActionLabel;
    NSString *_sendActionLabel;
    NSString *_followupUniqueIdentifier;
    double _followupFrequency;
    NSURL *_followupReviewActionURL;
    NSURL *_followupSendActionURL;
    NSDictionary *_followupReviewActionUserInfo;
    NSDictionary *_followupSendActionUserInfo;
    NSString *_followupLocalizedTitle;
    NSString *_followupLocalizedInformativeText;
    NSString *_followupExtensionIdentifier;
    NSURL *_followupNotificationActionURL;
    NSString *_followupNotificationActionTitle;
}

@property (retain) NSString *hostAppIdentifier;
@property (retain) NSString *localizedNotificationTitle;
@property (retain) NSString *localizedNotificationBody;
@property (retain) NSString *reviewActionLabel;
@property (retain) NSString *sendActionLabel;
@property _Bool userNotificationShouldPlaySound;
@property (retain) NSString *followupUniqueIdentifier;
@property double followupFrequency;
@property (retain) NSURL *followupReviewActionURL;
@property (retain) NSURL *followupSendActionURL;
@property (retain) NSDictionary *followupReviewActionUserInfo;
@property (retain) NSDictionary *followupSendActionUserInfo;
@property (retain) NSString *followupLocalizedTitle;
@property (retain) NSString *followupLocalizedInformativeText;
@property (retain) NSString *followupExtensionIdentifier;
@property _Bool followupUseSpringboardNotification;
@property (retain) NSURL *followupNotificationActionURL;
@property (retain) NSString *followupNotificationActionTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)archivedClasses;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHostAppIdentifier:(id)arg1 localizedNotificationTitle:(id)arg2 localizedNotificationBody:(id)arg3;

@end
