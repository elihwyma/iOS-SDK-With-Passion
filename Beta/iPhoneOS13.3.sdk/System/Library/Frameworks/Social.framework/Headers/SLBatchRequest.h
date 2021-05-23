/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLRequest.h>

@class NSMutableArray;

@interface SLBatchRequest : SLRequest

{
    NSMutableArray *_requests;
}

- (void)addRequest:(id)arg1;
- (id)preparedURLRequest;
- (id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(long long)arg4;

@end
