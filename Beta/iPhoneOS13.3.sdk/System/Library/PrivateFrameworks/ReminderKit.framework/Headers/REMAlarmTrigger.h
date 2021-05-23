/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class REMObjectID;

@interface REMAlarmTrigger : NSObject <Swift>

{
    REMObjectID *_objectID;
}

@property (retain, nonatomic) REMObjectID *objectID;
@property (nonatomic, readonly) _Bool isTemporal;
@property (nonatomic, readonly) REMObjectID *remObjectID;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1;
- (id)_deepCopy;
- (id)initWithAlarmTrigger:(id)arg1 objectID:(id)arg2;
- (_Bool)isContentEqual:(id)arg1;

@end
