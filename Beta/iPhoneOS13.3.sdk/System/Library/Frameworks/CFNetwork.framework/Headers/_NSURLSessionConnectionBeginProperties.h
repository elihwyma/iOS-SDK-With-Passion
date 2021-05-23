/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class __CFN_ConnectionMetrics;

@protocol OS_nw_endpoint;

@interface _NSURLSessionConnectionBeginProperties : NSObject

{
    __CFN_ConnectionMetrics *__metrics;
}

@property (nonatomic, readonly) __CFN_ConnectionMetrics *_metrics;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *endpoint;
@property (nonatomic, readonly, getter=isTLSConfigured) _Bool TLSConfigured;
@property (nonatomic, readonly, getter=isProxyConfigured) _Bool proxyConfigured;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetrics:(id)arg1;

@end
