/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKContinueWatchingResponse;

@interface WLKTopShelfUpNextRequestOperation : WLKUTSNetworkRequestOperation

{
    WLKContinueWatchingResponse *_response;
}

@property (retain, nonatomic) WLKContinueWatchingResponse *response;

- (id)init;
- (void)processResponse;
- (id)initWithQueryParameters:(id)arg1 options:(long long)arg2;

@end
