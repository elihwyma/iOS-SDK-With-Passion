/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSDictionary, WLKSiriSearchResponse;

@interface WLKSiriSearchRequestOperation : WLKUTSNetworkRequestOperation

{
    NSDictionary *_query;
    WLKSiriSearchResponse *_response;
}

@property (copy, nonatomic, readonly) NSDictionary *query;
@property (nonatomic, readonly) WLKSiriSearchResponse *response;

- (id)initWithQuery:(id)arg1 caller:(id)arg2;
- (void)processResponse;

@end
