/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSSet, NSString;

@interface TIInputContextHistory : NSObject

{
    NSMutableArray *_entries;
    NSMutableArray *_pendingEntries;
    NSSet *_recipientIdentifiers;
    NSSet *_senderIdentifiers;
}

@property (nonatomic, readonly) NSArray *entries;
@property (nonatomic, readonly) NSArray *pendingEntries;
@property (nonatomic, readonly) NSSet *senderIdentifiers;
@property (nonatomic, readonly) NSSet *recipientIdentifiers;
@property (nonatomic, readonly) NSString *aggregateText;
@property (nonatomic, readonly) NSString *mostRecentNonSenderTextEntry;
@property (nonatomic, readonly) _Bool mostRecentTextEntryIsByMe;
@property (nonatomic, readonly) NSString *mostRecentTextEntryLogString;
@property (nonatomic, readonly) NSString *senderIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mostRecentTextEntries:(unsigned long long)arg1;
- (void)assertCheckpointForCoding;
- (_Bool)hasPendingEntries;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3;
- (id)initWithRecipientIdentifiers:(id)arg1;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2;
- (void)_enumerateAllEntriesAsInputContextEntries:(CDUnknownBlockType)arg1;
- (void)enumerateAllEntries:(CDUnknownBlockType)arg1;
- (void)enumeratePendingEntries:(CDUnknownBlockType)arg1;
- (void)appendPendingEntriesFromInputContextHistory:(id)arg1;

@end
