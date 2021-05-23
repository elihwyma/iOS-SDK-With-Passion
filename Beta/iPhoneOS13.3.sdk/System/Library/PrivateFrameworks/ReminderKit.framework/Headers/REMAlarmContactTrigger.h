/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMAlarmTrigger.h>

#import <ReminderKit/Swift-Protocol.h>

@class REMContactRepresentation;

@interface REMAlarmContactTrigger : REMAlarmTrigger <Swift>

{
    REMContactRepresentation *_contactRepresentation;
}

@property (nonatomic, readonly) REMContactRepresentation *contactRepresentation;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_deepCopy;
- (_Bool)isTemporal;
- (id)initWithContactRepresentation:(id)arg1;
- (id)initWithObjectID:(id)arg1 contactRepresentation:(id)arg2;

@end
