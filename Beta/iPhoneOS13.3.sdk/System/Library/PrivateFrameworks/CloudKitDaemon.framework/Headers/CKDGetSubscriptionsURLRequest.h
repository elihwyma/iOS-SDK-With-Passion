/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDGetSubscriptionsURLRequest : CKDURLRequest

{
    NSMutableArray *_subscriptions;
    CDUnknownBlockType _subscriptionFetchedBlock;
    NSArray *_subscriptionIDs;
    NSMutableDictionary *_subscriptionIDByRequestID;
}

@property (retain, nonatomic) NSArray *subscriptionIDs;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableDictionary *subscriptionIDByRequestID;
@property (copy, nonatomic) CDUnknownBlockType subscriptionFetchedBlock;

- (int)operationType;
- (id)initWithSubscriptionIDs:(id)arg1;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;

@end
