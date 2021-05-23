/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGObject.h>

@class NSDate, NSDateComponents, NSString, NSURL, SGLocation;

@interface SGReminder : SGObject

{
    unsigned char _dueLocationType;
    unsigned char _dueLocationTrigger;
    unsigned char _reminderStatus;
    NSString *_title;
    NSDateComponents *_dueDateComponents;
    SGLocation *_dueLocation;
    NSURL *_sourceURL;
    NSDate *_creationDate;
    NSString *_opaqueKey;
    NSString *_uniqueKey;
    NSString *_contactIdentifier;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDateComponents *dueDateComponents;
@property (nonatomic, readonly) unsigned char dueLocationType;
@property (nonatomic, readonly) SGLocation *dueLocation;
@property (nonatomic, readonly) unsigned char dueLocationTrigger;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSString *opaqueKey;
@property (nonatomic, readonly) NSString *uniqueKey;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) unsigned char reminderStatus;

+ (_Bool)supportsSecureCoding;
+ (id)describeReminderStatus:(unsigned char)arg1;
+ (id)describeReminderDueLocationTrigger:(unsigned char)arg1;
+ (id)describeReminderDueLocationType:(unsigned char)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)isAllDay;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2 title:(id)arg3 dueDateComponents:(id)arg4 dueLocationType:(unsigned char)arg5 dueLocation:(id)arg6 dueLocationTrigger:(unsigned char)arg7 sourceURL:(id)arg8 reminderStatus:(unsigned char)arg9 opaqueKey:(id)arg10 uniqueKey:(id)arg11 contactIdentifier:(id)arg12 creationDate:(id)arg13;
- (id)initWithTitle:(id)arg1 dueDateComponents:(id)arg2 dueLocationType:(unsigned char)arg3 dueLocation:(id)arg4 dueLocationTrigger:(unsigned char)arg5 sourceURL:(id)arg6 reminderStatus:(unsigned char)arg7;
- (_Bool)isEqualToReminder:(id)arg1;

@end
