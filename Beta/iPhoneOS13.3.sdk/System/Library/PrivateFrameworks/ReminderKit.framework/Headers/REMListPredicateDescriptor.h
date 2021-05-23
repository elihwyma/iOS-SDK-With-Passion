/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSArray, REMObjectID;

@interface REMListPredicateDescriptor : NSObject <Swift>

{
    long long _type;
    REMObjectID *_accountID;
    REMObjectID *_parentListID;
    NSArray *_objectIDs;
}

@property (nonatomic, readonly) long long type;
@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *parentListID;
@property (retain, nonatomic) NSArray *objectIDs;

+ (_Bool)supportsSecureCoding;
+ (id)predicateDescriptorForAllLists;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;

@end
