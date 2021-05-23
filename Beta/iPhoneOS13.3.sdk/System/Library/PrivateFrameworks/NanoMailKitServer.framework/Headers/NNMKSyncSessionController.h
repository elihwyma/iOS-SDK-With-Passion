/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSMutableSet;

@interface NNMKSyncSessionController : NSObject

{
    NSMutableSet *_messageIdsToIgnoreStatusUpdates;
    NSMutableDictionary *_notificationPayloadAcks;
    NSMutableDictionary *_syncingAccountIdentityByUsername;
    NSMutableDictionary *_standaloneStateByAccountId;
    double _accountAuthRequestLastRequestTime;
    NSDate *_lastSyncDueToMailboxesMismatchRequestTime;
}

@property (retain, nonatomic) NSMutableSet *messageIdsToIgnoreStatusUpdates;
@property (retain, nonatomic) NSMutableDictionary *notificationPayloadAcks;
@property (retain, nonatomic) NSMutableDictionary *syncingAccountIdentityByUsername;
@property (retain, nonatomic) NSMutableDictionary *standaloneStateByAccountId;
@property (nonatomic) double accountAuthRequestLastRequestTime;
@property (retain, nonatomic) NSDate *lastSyncDueToMailboxesMismatchRequestTime;

- (id)init;
- (unsigned long long)standaloneStateForAccountId:(id)arg1;
- (void)updateStandaloneState:(unsigned long long)arg1 forAccountId:(id)arg2;
- (void)deleteStandaloneStateForAccountId:(id)arg1;

@end
