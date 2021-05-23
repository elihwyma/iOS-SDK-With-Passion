/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKCanonicalPlayablesResponse;

@interface WLKCanonicalPlayablesRequestOperation : WLKUTSNetworkRequestOperation

{
    NSString *_contentID;
    WLKCanonicalPlayablesResponse *_response;
}

@property (copy, nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) WLKCanonicalPlayablesResponse *response;

- (void)processResponse;
- (id)initWithContentID:(id)arg1 profiles:(id)arg2 caller:(id)arg3;

@end
