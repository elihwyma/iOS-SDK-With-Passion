/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary;

@interface WLKSettingsModificationRequestOperation : WLKNetworkRequestOperation

{
    NSDictionary *_modifications;
}

+ (id)_requestURL:(id *)arg1;

- (id)_postBody;
- (void)prepareURLRequest:(CDUnknownBlockType)arg1;
- (id)initWithModifications:(id)arg1;

@end
