/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

#import <MobileTimer/Swift-Protocol.h>

@class NSDate, NSString;

@interface MTTrigger : NSObject <Swift>

{
    unsigned long long _triggerType;
    NSDate *_triggerDate;
}

@property (nonatomic) unsigned long long triggerType;
@property (copy, nonatomic) NSDate *triggerDate;
@property (nonatomic, readonly) _Bool isForSnooze;
@property (nonatomic, readonly) _Bool isForGoToBed;
@property (nonatomic, readonly) _Bool isForAlert;
@property (nonatomic, readonly) _Bool isForNotification;
@property (nonatomic, readonly) _Bool isScheduled;
@property (nonatomic, readonly) _Bool isEvent;
@property (nonatomic, readonly) _Bool isBedtimeRelated;
@property (nonatomic, readonly) _Bool isWakeUpRelated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_stringForType:(unsigned long long)arg1;
+ (id)triggerWithDate:(id)arg1 triggerType:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)isEqualToTrigger:(id)arg1;

@end
