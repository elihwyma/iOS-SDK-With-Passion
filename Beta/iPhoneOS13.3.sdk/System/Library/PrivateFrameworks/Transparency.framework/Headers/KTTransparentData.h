/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray;

@interface KTTransparentData : NSObject

{
    NSMutableArray *_accounts;
    NSData *_inclusionProof;
    NSData *_uriVRFOutput;
}

@property (retain) NSMutableArray *accounts;
@property (retain) NSData *uriVRFOutput;
@property (retain) NSData *inclusionProof;

+ (_Bool)supportsSecureCoding;
+ (id)filterLoggableDatas:(id)arg1 deviceIdVRFOutput:(id)arg2;
+ (id)filterLoggableDatas:(id)arg1 clientDataVRFOutput:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serialize;
- (id)accountForAccountId:(id)arg1;
- (_Bool)updateWithMutation:(id)arg1 error:(id *)arg2;
- (_Bool)updateWithMapLeaf:(id)arg1 error:(id *)arg2;
- (_Bool)updateWithSMTs:(id)arg1 error:(id *)arg2;
- (id)initWithUriVRFOutput:(id)arg1 mapLeaf:(id)arg2 pendingSMTs:(id)arg3 error:(id *)arg4;
- (void)markAccountsWithMutationMs:(unsigned long long)arg1;
- (void)addAccountsObject:(id)arg1;
- (void)removeAccountsObject:(id)arg1;
- (id)mutationsFromSMTs:(id)arg1 error:(id *)arg2;
- (id)sortMutationsByTimestamp:(id)arg1;
- (id)initWithUriVRFOutput:(id)arg1;
- (_Bool)validateAndUpdateWithSyncedLoggableDatas:(id)arg1 accountId:(id)arg2 error:(id *)arg3;
- (_Bool)validateOtherAccountIDsInactiveForAccountId:(id)arg1 error:(id *)arg2;
- (_Bool)validateActiveClientDatasForAccountId:(id)arg1 error:(id *)arg2;
- (_Bool)validateAndUpdateWithServerLoggableDatas:(id)arg1 accountId:(id)arg2 error:(id *)arg3;

@end
