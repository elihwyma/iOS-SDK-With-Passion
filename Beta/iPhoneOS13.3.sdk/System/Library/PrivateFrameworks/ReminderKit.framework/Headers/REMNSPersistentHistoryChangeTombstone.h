/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMChangeTombstone.h>

@class NSDictionary;

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone

{
    NSDictionary *_persistentHistoryChangeTombstone;
}

@property (retain) NSDictionary *persistentHistoryChangeTombstone;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)objectIdentifier;
- (id)externalIdentifier;
- (id)daIsEventOnlyContainer;
- (id)shareeOwningListIdentifier;
- (id)shareeDisplayName;
- (id)shareeAddress;

@end
