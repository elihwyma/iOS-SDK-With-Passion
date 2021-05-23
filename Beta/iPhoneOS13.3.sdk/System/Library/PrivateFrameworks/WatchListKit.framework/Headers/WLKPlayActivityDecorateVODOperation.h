/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray, NSDictionary;

@interface WLKPlayActivityDecorateVODOperation : WLKUTSNetworkRequestOperation

{
    NSArray *_playActivityIdentifiers;
    NSDictionary *_metadataByIdentifier;
}

@property (copy, nonatomic, readonly) NSArray *playActivityIdentifiers;
@property (copy, nonatomic, readonly) NSDictionary *metadataByIdentifier;

+ (id)identifierForPlayActivityID:(id)arg1 channelID:(id)arg2 duration:(id)arg3;

- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (void)processResponse;

@end
