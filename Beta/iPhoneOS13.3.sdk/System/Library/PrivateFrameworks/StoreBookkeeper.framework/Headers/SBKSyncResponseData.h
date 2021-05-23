/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, SBKSyncTransaction;

__attribute__((visibility("hidden")))
@interface SBKSyncResponseData : NSObject

{
    SBKSyncTransaction *_transaction;
    NSString *_syncAnchor;
    NSArray *_updatedKeys;
    NSArray *_conflictedKeys;
    NSArray *_deletedKeys;
    NSArray *_successfullyUpdatedKeys;
    NSArray *_successfullyDeletedKeys;
    NSMutableDictionary *_responseOpEntiesByKey;
}

@property (retain) NSMutableDictionary *responseOpEntiesByKey;
@property (readonly) SBKSyncTransaction *transaction;
@property (copy, readonly) NSString *syncAnchor;
@property (readonly) NSArray *updatedKeys;
@property (readonly) NSArray *conflictedKeys;
@property (readonly) NSArray *deletedKeys;
@property (readonly) NSArray *successfullyUpdatedKeys;
@property (readonly) NSArray *successfullyDeletedKeys;

+ (id)deserializedResponseBodyWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3;

- (id)description;
- (id)initWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3;
- (void)_deserializeResponseDictionary:(id)arg1 response:(id)arg2;
- (id)payloadDataForUpdateResponseKey:(id)arg1;

@end
