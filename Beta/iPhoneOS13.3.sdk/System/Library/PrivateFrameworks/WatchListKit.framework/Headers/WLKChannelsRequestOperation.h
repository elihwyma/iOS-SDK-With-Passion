/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKChannelsResponse;

@interface WLKChannelsRequestOperation : WLKUTSNetworkRequestOperation

{
    _Bool _filtered;
    WLKChannelsResponse *_channelsResponse;
    NSString *_caller;
}

@property (copy, nonatomic) NSString *caller;
@property (nonatomic) _Bool filtered;
@property (retain, nonatomic) WLKChannelsResponse *channelsResponse;

- (id)initWithCaller:(id)arg1;
- (void)processResponse;
- (id)initWithCaller:(id)arg1 filtered:(_Bool)arg2;

@end
