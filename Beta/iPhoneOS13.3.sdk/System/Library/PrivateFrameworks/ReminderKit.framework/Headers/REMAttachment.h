/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSString, REMObjectID;

@interface REMAttachment : NSObject <Swift>

{
    NSString *_uti;
    REMObjectID *_objectID;
    REMObjectID *_accountID;
    REMObjectID *_reminderID;
}

@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) REMObjectID *reminderID;
@property (nonatomic, readonly) NSString *uti;
@property (nonatomic, readonly) REMObjectID *remObjectID;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttachment:(id)arg1 objectID:(id)arg2 accountID:(id)arg3 reminderID:(id)arg4;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4;

@end
