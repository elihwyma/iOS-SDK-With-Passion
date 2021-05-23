/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSDate, NSString, NSURL, NSUUID;

@interface AFClockAlarm : NSObject <Swift>

{
    _Bool _isFiring;
    _Bool _isEnabled;
    _Bool _isSnoozed;
    NSUUID *_alarmID;
    NSURL *_alarmURL;
    NSString *_title;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _repeatOptions;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *itemID;
@property (nonatomic, readonly) NSURL *itemURL;
@property (nonatomic, readonly) _Bool isFiring;
@property (copy, nonatomic, readonly) NSDate *firedDate;
@property (copy, nonatomic, readonly) NSDate *dismissedDate;
@property (copy, nonatomic, readonly) NSDate *lastModifiedDate;
@property (copy, nonatomic, readonly) NSUUID *alarmID;
@property (copy, nonatomic, readonly) NSURL *alarmURL;
@property (nonatomic, readonly) _Bool isFiring;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long hour;
@property (nonatomic, readonly) unsigned long long minute;
@property (nonatomic, readonly) unsigned long long repeatOptions;
@property (nonatomic, readonly) _Bool isEnabled;
@property (nonatomic, readonly) _Bool isSnoozed;
@property (copy, nonatomic, readonly) NSDate *firedDate;
@property (copy, nonatomic, readonly) NSDate *dismissedDate;
@property (copy, nonatomic, readonly) NSDate *lastModifiedDate;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithAlarmID:(id)arg1 alarmURL:(id)arg2 isFiring:(_Bool)arg3 title:(id)arg4 hour:(unsigned long long)arg5 minute:(unsigned long long)arg6 repeatOptions:(unsigned long long)arg7 isEnabled:(_Bool)arg8 isSnoozed:(_Bool)arg9 firedDate:(id)arg10 dismissedDate:(id)arg11 lastModifiedDate:(id)arg12;

@end
