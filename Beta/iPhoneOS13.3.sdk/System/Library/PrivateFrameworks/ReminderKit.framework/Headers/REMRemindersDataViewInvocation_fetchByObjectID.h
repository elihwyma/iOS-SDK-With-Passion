/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class NSArray;

@interface REMRemindersDataViewInvocation_fetchByObjectID <Swift>

{
    _Bool _showMarkedForDeleteObjects;
    NSArray *_objectIDs;
}

@property (nonatomic, readonly) NSArray *objectIDs;
@property (nonatomic) _Bool showMarkedForDeleteObjects;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectIDs:(id)arg1;

@end
