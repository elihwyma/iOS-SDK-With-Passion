/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray, WLKBasicContentMetadata, WLKBasicContentRequestResponse;

@interface WLKBasicContentRequestOperation : WLKUTSNetworkRequestOperation

{
    NSArray *_contentIDs;
    WLKBasicContentRequestResponse *_response;
}

@property (copy, nonatomic, readonly) NSArray *contentIDs;
@property (nonatomic, readonly) WLKBasicContentRequestResponse *response;
@property (nonatomic, readonly) WLKBasicContentMetadata *basicContentMetadata;

- (void)processResponse;
- (id)initWithContentIDs:(id)arg1 caller:(id)arg2;
- (id)initWithContentID:(id)arg1 caller:(id)arg2;

@end
