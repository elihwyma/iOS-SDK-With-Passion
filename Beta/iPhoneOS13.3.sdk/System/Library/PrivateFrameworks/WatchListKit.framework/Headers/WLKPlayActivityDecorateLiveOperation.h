/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKPlayActivityDecorateLiveOperation : WLKUTSNetworkRequestOperation

{
    NSString *_channelID;
    NSString *_serviceID;
}

@property (copy, nonatomic, readonly) NSString *channelID;
@property (copy, nonatomic, readonly) NSString *serviceID;

- (id)initWithChannelID:(id)arg1 serviceID:(id)arg2;

@end
