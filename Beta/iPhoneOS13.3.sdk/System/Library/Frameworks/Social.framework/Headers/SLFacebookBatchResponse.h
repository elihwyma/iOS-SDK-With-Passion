/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLFacebookResponse.h>

@class NSArray;

@interface SLFacebookBatchResponse : SLFacebookResponse

@property (readonly) NSArray *batchResponseParameters;

- (long long)batchedResponsesCount;
- (id)responseAtBatchIndex:(long long)arg1;

@end
