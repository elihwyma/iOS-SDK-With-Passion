/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKRequest.h>

@class NSDictionary;

@interface WLKSiriSearchRequest : WLKRequest

{
    NSDictionary *_query;
}

@property (copy, nonatomic, readonly) NSDictionary *query;

- (id)initWithQuery:(id)arg1;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;

@end
