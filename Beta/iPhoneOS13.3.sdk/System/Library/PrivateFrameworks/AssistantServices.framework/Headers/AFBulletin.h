/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class BBBulletin, NSArray, NSDate, NSString;

@interface AFBulletin : NSObject <Swift>

{
    _Bool _availableOnLockScreen;
    _Bool _supportsSpokenNotification;
    _Bool _read;
    _Bool _allDay;
    _Bool _previewRestricted;
    NSString *_displayName;
    BBBulletin *_bbBulletin;
    NSString *_bulletinID;
    NSString *_recordID;
    NSDate *_date;
    NSDate *_endDate;
    NSString *_message;
    NSString *_modalAlertContentMessage;
    NSDate *_recencyDate;
    NSString *_sectionID;
    long long _sectionSubtype;
    NSString *_subtitle;
    NSString *_timeZone;
    NSString *_title;
    NSArray *_intentIDs;
    NSString *_publisherBulletinID;
    NSString *_threadID;
    NSString *_internalID;
}

@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) _Bool availableOnLockScreen;
@property (nonatomic) _Bool supportsSpokenNotification;
@property (nonatomic, getter=isRead) _Bool read;
@property (nonatomic, readonly) BBBulletin *bbBulletin;
@property (copy, nonatomic, readonly) NSString *bulletinID;
@property (copy, nonatomic, readonly) NSString *recordID;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly, getter=isAllDay) _Bool allDay;
@property (copy, nonatomic, readonly) NSString *message;
@property (copy, nonatomic, readonly) NSString *modalAlertContentMessage;
@property (copy, nonatomic, readonly) NSDate *recencyDate;
@property (copy, nonatomic, readonly) NSString *sectionID;
@property (nonatomic, readonly) long long sectionSubtype;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *timeZone;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSArray *intentIDs;
@property (copy, nonatomic, readonly) NSString *publisherBulletinID;
@property (nonatomic, readonly) _Bool previewRestricted;
@property (copy, nonatomic, readonly) NSString *threadID;
@property (copy, nonatomic, readonly) NSString *internalID;

+ (_Bool)supportsSecureCoding;
+ (id)internalIDForBBBulletinID:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_displayNameForBulletin:(id)arg1;
- (void)setBulletin:(id)arg1;
- (void)setNotification:(id)arg1 fromSourceApp:(id)arg2;

@end
