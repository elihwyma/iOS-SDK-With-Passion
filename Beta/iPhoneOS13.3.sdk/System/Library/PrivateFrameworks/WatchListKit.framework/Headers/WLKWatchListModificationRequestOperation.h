/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKWatchListModificationResponse;

@interface WLKWatchListModificationRequestOperation : WLKUTSNetworkRequestOperation

{
    unsigned long long _action;
    NSString *_itemID;
    WLKWatchListModificationResponse *_response;
}

@property (nonatomic, readonly) unsigned long long action;
@property (copy, nonatomic, readonly) NSString *itemID;
@property (nonatomic, readonly) WLKWatchListModificationResponse *response;

- (id)initWithAction:(unsigned long long)arg1 canonicalID:(id)arg2 caller:(id)arg3;
- (void)processResponse;
- (id)initWithAction:(unsigned long long)arg1 identifier:(id)arg2 caller:(id)arg3;
- (id)initWithAction:(unsigned long long)arg1 statsID:(id)arg2 caller:(id)arg3;
- (id)initWithAction:(unsigned long long)arg1 channelID:(id)arg2 externalID:(id)arg3 caller:(id)arg4;

@end
