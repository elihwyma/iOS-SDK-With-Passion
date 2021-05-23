/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray;

@interface WLKTopShelfRequestOperation : WLKUTSNetworkRequestOperation

{
    NSArray *_items;
}

@property (nonatomic, readonly) NSArray *items;

- (id)init;
- (void)processResponse;
- (id)initWithQueryParameters:(id)arg1 options:(long long)arg2;

@end
