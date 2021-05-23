/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMAlarmTrigger.h>

#import <ReminderKit/Swift-Protocol.h>

@class REMStructuredLocation;

@interface REMAlarmLocationTrigger : REMAlarmTrigger <Swift>

{
    REMStructuredLocation *_structuredLocation;
    long long _proximity;
}

@property (copy, nonatomic) REMStructuredLocation *structuredLocation;
@property (nonatomic) long long proximity;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_deepCopy;
- (id)initWithStructuredLocation:(id)arg1 proximity:(long long)arg2;
- (_Bool)isTemporal;
- (_Bool)isContentEqual:(id)arg1;
- (id)initWithObjectID:(id)arg1 structuredLocation:(id)arg2 proximity:(long long)arg3;

@end
