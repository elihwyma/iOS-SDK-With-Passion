/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKContinueWatchingResponse;

@interface WLKPlayHistoryRemoveRequestOperation : WLKUTSNetworkRequestOperation

{
    WLKContinueWatchingResponse *_response;
}

@property (nonatomic, readonly) WLKContinueWatchingResponse *response;

- (void)processResponse;
- (id)initWithChannelID:(id)arg1 externalID:(id)arg2 caller:(id)arg3;

@end
