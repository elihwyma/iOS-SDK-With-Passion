/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSDictionary, WLKSearchWatchListResponse;

@interface WLKSearchWatchListRequestOperation : WLKUTSNetworkRequestOperation

{
    NSDictionary *_query;
    WLKSearchWatchListResponse *_response;
}

@property (copy, nonatomic, readonly) NSDictionary *query;
@property (nonatomic, readonly) WLKSearchWatchListResponse *response;

- (id)initWithQuery:(id)arg1 caller:(id)arg2;
- (void)processResponse;

@end
