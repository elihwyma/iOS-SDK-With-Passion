/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray;

@interface WLKFavoritesRequestOperation : WLKUTSNetworkRequestOperation

{
    NSArray *_favorites;
}

@property (nonatomic, readonly) NSArray *favorites;

- (id)initWithCaller:(id)arg1;
- (void)prepareURLRequest:(CDUnknownBlockType)arg1;
- (void)processResponse;

@end
