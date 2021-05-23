/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKRequest.h>

@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequest : WLKRequest

{
    _Bool _allowAuthentication;
    WLKContinueWatchingResponse *_response;
}

@property (nonatomic) _Bool allowAuthentication;
@property (nonatomic, readonly) WLKContinueWatchingResponse *response;

- (id)init;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;

@end
