/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMObjectID.h>

@class ECAngleBracketIDHash, EMMailboxScope, EMMessageCollectionItemID, NSData;

@interface EMMessageObjectID : EMObjectID

{
    EMMessageCollectionItemID *_collectionItemID;
    EMMailboxScope *_mailboxScope;
}

@property (nonatomic, readonly) NSData *serializedRepresentation;
@property (nonatomic, readonly) EMMessageCollectionItemID *collectionItemID;
@property (nonatomic, readonly) long long databaseID;
@property (nonatomic, readonly) ECAngleBracketIDHash *messageIDHeaderHash;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;

+ (id)new;
+ (_Bool)supportsSecureCoding;
+ (id)log;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initWithMessageIDHeaderHash:(id)arg1 mailboxScope:(id)arg2;
- (id)initWithMessageDatabaseID:(long long)arg1;
- (id)initWithCollectionItemID:(id)arg1 mailboxScope:(id)arg2;
- (id)initWithCollectionItemID:(id)arg1 predicate:(id)arg2 mailboxTypeResolver:(id)arg3;

@end
