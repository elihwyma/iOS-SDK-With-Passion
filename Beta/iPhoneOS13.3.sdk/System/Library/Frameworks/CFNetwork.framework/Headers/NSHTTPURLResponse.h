/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLResponse.h>

@class NSDictionary, NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse

{
    NSHTTPURLResponseInternal *_httpInternal;
}

@property (readonly) long long statusCode;
@property (copy, readonly) NSDictionary *allHeaderFields;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isErrorStatusCode:(long long)arg1;
+ (id)localizedStringForStatusCode:(long long)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForHTTPHeaderField:(id)arg1;
- (id)_initWithCFURLResponse:(id)arg1;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4;
- (id)_allHTTPHeaderFieldsAsArrays;
- (id)_peerCertificateChain;
- (id)_clientCertificateChain;
- (id)_clientCertificateState;
- (void)_setPeerTrust:(struct __SecTrust *)arg1;
- (struct __SecTrust *)_peerTrust;

@end
