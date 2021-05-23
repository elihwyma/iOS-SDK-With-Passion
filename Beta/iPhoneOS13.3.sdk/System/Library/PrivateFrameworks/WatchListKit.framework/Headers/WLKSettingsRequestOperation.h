/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary;

@interface WLKSettingsRequestOperation : WLKNetworkRequestOperation

{
    NSDictionary *_response;
}

@property (nonatomic, readonly) NSDictionary *response;

+ (id)_requestURL:(id *)arg1;

- (id)init;
- (void)prepareURLRequest:(CDUnknownBlockType)arg1;
- (void)processResponse;

@end
