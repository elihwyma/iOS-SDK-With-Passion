/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString, PPXPCServerPipelinedBatchQueryManager;

@protocol PPConnectionsClientProtocol;

@interface PPConnectionsServerRequestHandler : NSObject

{
    id <PPConnectionsClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
}

@property (copy, nonatomic) NSString *clientProcessName;

- (id)init;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 queryId:(unsigned long long)arg6;
- (void)recentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 queryId:(unsigned long long)arg3;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end
