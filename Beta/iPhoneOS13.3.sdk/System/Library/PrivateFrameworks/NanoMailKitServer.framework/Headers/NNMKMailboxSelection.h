/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface NNMKMailboxSelection : NSObject

{
    NSArray *_mailboxesWithAllMessagesSyncEnabled;
    NSArray *_aggregatedMailboxes;
    unsigned long long _aggregatedMailboxesFilterTypes;
    NSSet *_mailboxesWithAllMessagesSyncEnabledIds;
    NSSet *_aggregatedMailboxesId;
    NSArray *_allMailboxesSyncEnabled;
    NSMutableDictionary *_allMailboxesSyncEnabledById;
}

@property (retain, nonatomic) NSArray *mailboxesWithAllMessagesSyncEnabled;
@property (nonatomic) unsigned long long aggregatedMailboxesFilterTypes;
@property (retain, nonatomic) NSArray *aggregatedMailboxes;
@property (retain, nonatomic) NSSet *mailboxesWithAllMessagesSyncEnabledIds;
@property (retain, nonatomic) NSSet *aggregatedMailboxesId;
@property (retain, nonatomic) NSArray *allMailboxesSyncEnabled;
@property (retain, nonatomic) NSMutableDictionary *allMailboxesSyncEnabledById;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)firstFilterTypeFromTypes:(unsigned long long)arg1;
+ (id)mailboxChangesApplyingSelection:(id)arg1 previousSelection:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasSelection;
- (id)initWithMailboxes:(id)arg1;
- (id)initWithAccounts:(id)arg1;
- (_Bool)isMailboxFilterEnabled:(unsigned long long)arg1;
- (id)mailboxWithId:(id)arg1;
- (void)_setupWithAccounts:(id)arg1;
- (void)_setupWithMailboxes:(id)arg1;
- (_Bool)hasSingleMailboxSelectionOnly;
- (_Bool)hasAggregateMailboxesForAllMessagesOnly;
- (_Bool)containsMailboxFilter:(id)arg1;

@end
