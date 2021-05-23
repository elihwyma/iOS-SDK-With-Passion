/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@protocol BCSCloudServerBodyProvider, BCSCloudServerRouteProvider;

__attribute__((visibility("hidden")))
@interface BCSCloudServerRequestHelper : NSObject

{
    id <BCSCloudServerRouteProvider> _cloudServerRouteProvider;
    id <BCSCloudServerBodyProvider> _cloudServerBodyProvider;
}

@property (retain, nonatomic) id <BCSCloudServerRouteProvider> cloudServerRouteProvider;
@property (retain, nonatomic) id <BCSCloudServerBodyProvider> cloudServerBodyProvider;

- (id)configItemRequestWithTimeout:(double)arg1;
- (id)bloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2 timeout:(double)arg3;
- (id)businessItemRequestWithBizID:(id)arg1 timeout:(double)arg2;
- (id)businessItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 timeout:(double)arg3;
- (id)initWithRouteProvider:(unsigned long long)arg1 bodyProvider:(unsigned long long)arg2;
- (id)baseBusinessItemJSONPostRequestWithTimeout:(double)arg1 cloudServerRequestType:(long long)arg2;
- (void)addEdgeCachingToRequest:(id)arg1 requestType:(id)arg2 requestIdentifier:(id)arg3;

@end
