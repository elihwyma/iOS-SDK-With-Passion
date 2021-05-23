/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <HealthKit/HKQuery.h>

@class NSString;

@interface ASFriendListQuery : HKQuery

{
    CDUnknownBlockType _updateHandler;
    int _mostRecentToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (_Bool)supportsTaskServers;

- (void)queue_validate;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)client_deliverFriendList:(id)arg1 queryUUID:(id)arg2;

@end
