/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordZoneID, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDModifySubscriptionsURLRequest : CKDURLRequest

{
    CKRecordZoneID *_zoneID;
    CDUnknownBlockType _subscriptionModifiedBlock;
    NSArray *_subscriptionsToSave;
    NSArray *_subscriptionIDsToDelete;
    NSMutableDictionary *_subscriptionIDByRequestID;
}

@property (retain, nonatomic) NSArray *subscriptionsToSave;
@property (retain, nonatomic) NSArray *subscriptionIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *subscriptionIDByRequestID;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (copy, nonatomic) CDUnknownBlockType subscriptionModifiedBlock;

- (int)operationType;
- (id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;

@end
