/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <ProtocolBuffer/NSURLResponse.h>

@interface NSURLResponse (SSVURLCacheAdditions)

@property (nonatomic, readonly) _Bool ssv_isExpiredResponse;

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
