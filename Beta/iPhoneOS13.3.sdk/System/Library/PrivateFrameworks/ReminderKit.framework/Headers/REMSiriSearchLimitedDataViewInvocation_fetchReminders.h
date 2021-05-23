/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface REMSiriSearchLimitedDataViewInvocation_fetchReminders <Swift>

{
    NSString *_title;
    NSDate *_dueAfter;
    NSDate *_dueBefore;
    NSNumber *_completed;
    NSNumber *_hasLocation;
    NSString *_location;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDate *dueAfter;
@property (nonatomic, readonly) NSDate *dueBefore;
@property (nonatomic, readonly) NSNumber *completed;
@property (nonatomic, readonly) NSNumber *hasLocation;
@property (nonatomic, readonly) NSString *location;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6;

@end
