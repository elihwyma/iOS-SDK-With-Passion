/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

#import <Engram/Swift-Protocol.h>

@class ENGroupID, NSArray, NSData, NSSet, _ENGroupInfo;

@protocol ENCypher;

@interface ENGroup : NSObject <Swift>

{
    ENGroupID *_groupID;
    id <ENCypher> _cypher;
    _ENGroupInfo *_groupInfo;
}

@property (retain, nonatomic) _ENGroupInfo *groupInfo;
@property (retain, nonatomic) id <ENCypher> cypher;
@property (nonatomic, readonly) ENGroupID *groupID;
@property (nonatomic, readonly) NSArray *participants;
@property (nonatomic, readonly) NSData *sharedApplicationData;
@property (nonatomic, readonly) NSSet *destinations;

+ (_Bool)supportsSecureCoding;
+ (id)sortedGroupsFromGroups:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)accountIdentity;
- (id)verifyAndRevealData:(id)arg1 sendingDevice:(id)arg2 cypherIdentifier:(id)arg3 error:(id *)arg4;
- (id)initWithGroupInfo:(id)arg1 groupID:(id)arg2 cypher:(id)arg3;
- (id)signAndConcealData:(id)arg1 cypherIdentifier:(id *)arg2 error:(id *)arg3;

@end
