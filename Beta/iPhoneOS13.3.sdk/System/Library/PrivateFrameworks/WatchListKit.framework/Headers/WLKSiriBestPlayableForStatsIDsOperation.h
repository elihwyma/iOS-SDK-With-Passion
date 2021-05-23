/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray, WLKSiriBestPlayablesResponse;

@interface WLKSiriBestPlayableForStatsIDsOperation : WLKUTSNetworkRequestOperation

{
    NSArray *_statsIDs;
    WLKSiriBestPlayablesResponse *_response;
}

@property (copy, nonatomic, readonly) NSArray *statsIDs;
@property (nonatomic, readonly) WLKSiriBestPlayablesResponse *response;

- (void)processResponse;
- (id)initWithStatsIDs:(id)arg1 caller:(id)arg2;

@end
