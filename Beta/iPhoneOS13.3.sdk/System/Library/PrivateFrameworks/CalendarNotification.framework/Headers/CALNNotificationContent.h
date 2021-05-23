/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNNotificationSound, NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface CALNNotificationContent : NSObject

{
    NSString *_title;
    NSString *_subtitle;
    NSString *_body;
    NSString *_categoryIdentifier;
    NSString *_sectionIdentifier;
    NSDate *_date;
    NSDate *_expirationDate;
    NSURL *_defaultActionURL;
    NSString *_iconIdentifier;
    _Bool _shouldHideTime;
    _Bool _shouldSuppressSyncDismissalWhenRemoved;
    NSArray *_peopleIdentifiers;
    CALNNotificationSound *_sound;
    NSDictionary *_userInfo;
    NSString *_threadIdentifier;
    NSString *_summaryArgument;
    unsigned long long _summaryArgumentCount;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *body;
@property (copy, nonatomic, readonly) NSString *categoryIdentifier;
@property (copy, nonatomic, readonly) NSString *sectionIdentifier;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic, readonly) NSURL *defaultActionURL;
@property (nonatomic, readonly) _Bool shouldHideTime;
@property (copy, nonatomic, readonly) NSString *iconIdentifier;
@property (nonatomic, readonly) _Bool shouldSuppressSyncDismissalWhenRemoved;
@property (copy, nonatomic, readonly) NSArray *peopleIdentifiers;
@property (copy, nonatomic, readonly) CALNNotificationSound *sound;
@property (copy, nonatomic, readonly) NSDictionary *userInfo;
@property (copy, nonatomic, readonly) NSString *threadIdentifier;
@property (copy, nonatomic, readonly) NSString *summaryArgument;
@property (nonatomic, readonly) unsigned long long summaryArgumentCount;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToContent:(id)arg1;
- (_Bool)isEqualForDiffingPurposesToContent:(id)arg1;
- (id)_initWithTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 sectionIdentifier:(id)arg5 date:(id)arg6 expirationDate:(id)arg7 defaultActionURL:(id)arg8 iconIdentifier:(id)arg9 shouldHideTime:(_Bool)arg10 shouldSuppressSyncDismissalWhenRemoved:(_Bool)arg11 peopleIdentifiers:(id)arg12 sound:(id)arg13 userInfo:(id)arg14 threadIdentifier:(id)arg15 summaryArgument:(id)arg16 summaryArgumentCount:(unsigned long long)arg17;

@end
