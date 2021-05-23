/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKPlayActivityDecorateEBSOperation : WLKUTSNetworkRequestOperation

{
    NSString *_channelID;
    NSString *_externalContentID;
}

@property (copy, nonatomic, readonly) NSString *channelID;
@property (copy, nonatomic, readonly) NSString *externalContentID;

- (id)initWithChannelID:(id)arg1 externalContentID:(id)arg2;

@end
