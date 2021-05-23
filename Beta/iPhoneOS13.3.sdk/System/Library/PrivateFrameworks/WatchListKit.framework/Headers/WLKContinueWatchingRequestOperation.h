/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequestOperation : WLKUTSNetworkRequestOperation

{
    WLKContinueWatchingResponse *_response;
}

@property (retain, nonatomic) WLKContinueWatchingResponse *response;

- (id)init;
- (id)initWithQueryParameters:(id)arg1;
- (void)processResponse;
- (void)_donateMediaItems:(id)arg1;
- (id)initWithCaller:(id)arg1 options:(long long)arg2;

@end
