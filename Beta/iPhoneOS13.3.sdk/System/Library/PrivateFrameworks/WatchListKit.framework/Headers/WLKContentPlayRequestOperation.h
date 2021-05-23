/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKContentPlayResponse;

@interface WLKContentPlayRequestOperation : WLKUTSNetworkRequestOperation

{
    NSString *_canonicalID;
    WLKContentPlayResponse *_response;
}

@property (retain, nonatomic) WLKContentPlayResponse *response;
@property (copy, nonatomic, readonly) NSString *canonicalID;

- (void)processResponse;
- (id)initWithCanonicalID:(id)arg1 caller:(id)arg2;

@end
