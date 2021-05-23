/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary;

@interface NPKPassSyncState : NSObject

{
    NSMutableDictionary *_syncStateItems;
}

@property (retain, nonatomic) NSMutableDictionary *syncStateItems;
@property (nonatomic, readonly) NSData *syncStateHash;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPasses:(id)arg1;
- (id)initWithProtoSyncState:(id)arg1;
- (id)protoSyncState;
- (_Bool)diffWithBaselineState:(id)arg1 representsMaterialDifferenceFromState:(id)arg2;
- (id)passSyncStateByApplyingChange:(id)arg1;
- (id)passSyncStateByAddingOrUpdatingSyncStateItem:(id)arg1;
- (id)passSyncStateByRemovingPassWithUniqueID:(id)arg1;
- (id)commonBaselinePassSyncStateWithState:(id)arg1;
- (_Bool)stateIsSubsetOfUnionOfPassSyncStates:(id)arg1;
- (void)compareWithBaselinePassSyncState:(id)arg1 outAddedPassUniqueIDs:(id *)arg2 outUpdatedPassUniqueIDs:(id *)arg3 outRemovedPassUniqueIDs:(id *)arg4;
- (id)initWithSyncStateItems:(id)arg1;
- (_Bool)isEqualToPassSyncState:(id)arg1;
- (_Bool)stateContainsSyncStateItem:(id)arg1;

@end
