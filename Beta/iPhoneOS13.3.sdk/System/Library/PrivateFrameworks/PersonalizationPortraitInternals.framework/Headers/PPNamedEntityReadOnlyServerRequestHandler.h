/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString, PPXPCServerPipelinedBatchQueryManager, _PASBundleIdResolver;

@protocol PPNamedEntityClientProtocol;

@interface PPNamedEntityReadOnlyServerRequestHandler : NSObject

{
    id <PPNamedEntityClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
    _PASBundleIdResolver *_bundleIdResolver;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

- (id)init;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mapItemForPlaceName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)namedEntityRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)rankedNamedEntitiesWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end
