/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class NSString;

@protocol IKNetworkRequestRecord <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long resourceType;
@property (nonatomic, readonly) long long initiatorType;
@property (nonatomic, readonly) long long state;

- (unsigned short)didReceiveData: /* Error: Ran out of types for this method. */;
- (unsigned short)didFailWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)willSendRequest:redirectResponse: /* Error: Ran out of types for this method. */;
- (unsigned short)didCompleteLoadingFromCache:mimeType:withResponseBody: /* Error: Ran out of types for this method. */;
- (unsigned short)didCompleteLoadingFromCache:withResponseBodyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)willSendRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)didReceiveResponse:timingData: /* Error: Ran out of types for this method. */;
- (unsigned short)didCompleteLoadingFromMemoryWithRequest:response:withResponseBodyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)didCompleteLoadingWithResponseBody: /* Error: Ran out of types for this method. */;

@end
