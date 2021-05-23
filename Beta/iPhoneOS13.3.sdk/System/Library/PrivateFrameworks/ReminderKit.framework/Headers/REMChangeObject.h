/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSSet, REMChangeTombstone, REMChangeTransaction, REMObjectID;

@interface REMChangeObject : NSObject <Swift>

{
    REMChangeTransaction *_transaction;
    long long _changeID;
    REMObjectID *_changedObjectID;
    long long _changeType;
    REMChangeTombstone *_tombstone;
}

@property (weak, nonatomic, readonly) REMChangeTransaction *transaction;
@property (nonatomic, readonly) long long changeID;
@property (nonatomic, readonly) REMObjectID *changedObjectID;
@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) REMChangeTombstone *tombstone;
@property (nonatomic, readonly) NSSet *updatedProperties;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isCoalesced;
- (id)coalescedChanges;
- (id)copyForCoalescing;

@end
