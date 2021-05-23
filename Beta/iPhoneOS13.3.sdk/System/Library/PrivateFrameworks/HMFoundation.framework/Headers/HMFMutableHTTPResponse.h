/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFHTTPResponse.h>

@class NSData;

@interface HMFMutableHTTPResponse : HMFHTTPResponse

@property (copy, nonatomic) NSData *body;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;

@end
