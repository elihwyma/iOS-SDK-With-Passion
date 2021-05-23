/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString, PPXPCServerPipelinedBatchQueryManager, _PASBundleIdResolver;

@protocol PPLocationClientProtocol;

@interface PPLocationReadOnlyServerRequestHandler : NSObject

{
    id <PPLocationClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
    _PASBundleIdResolver *_bundleIdResolver;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

- (id)init;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)locationRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)rankedLocationsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end
