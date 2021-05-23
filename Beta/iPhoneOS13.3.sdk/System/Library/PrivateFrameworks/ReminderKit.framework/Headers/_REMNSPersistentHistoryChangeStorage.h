/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSSet, REMNSPersistentHistoryChangeTombstone, REMObjectID;

@interface _REMNSPersistentHistoryChangeStorage : NSObject <Swift>

{
    long long _changeID;
    REMObjectID *_changedObjectID;
    long long _changeType;
    REMNSPersistentHistoryChangeTombstone *_tombstone;
    NSSet *_updatedProperties;
}

@property (nonatomic) long long changeID;
@property (copy, nonatomic) REMObjectID *changedObjectID;
@property (nonatomic) long long changeType;
@property (copy, nonatomic) REMNSPersistentHistoryChangeTombstone *tombstone;
@property (copy, nonatomic) NSSet *updatedProperties;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
