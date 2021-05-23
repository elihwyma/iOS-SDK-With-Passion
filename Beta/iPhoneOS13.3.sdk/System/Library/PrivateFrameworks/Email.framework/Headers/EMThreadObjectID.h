/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMObjectID.h>

#import <Email/Swift-Protocol.h>

@class EMThreadCollectionItemID, EMThreadScope, NSString;

@interface EMThreadObjectID : EMObjectID <Swift>

{
    EMThreadCollectionItemID *_collectionItemID;
    EMThreadScope *_threadScope;
}

@property (nonatomic, readonly) EMThreadCollectionItemID *collectionItemID;
@property (nonatomic, readonly) long long conversationID;
@property (copy, nonatomic, readonly) EMThreadScope *threadScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionItemID:(id)arg1 threadScope:(id)arg2;
- (id)initWithConversationID:(long long)arg1 threadScope:(id)arg2;

@end
