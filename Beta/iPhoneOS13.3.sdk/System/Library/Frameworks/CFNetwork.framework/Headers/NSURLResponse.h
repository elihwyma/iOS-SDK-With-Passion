/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSString, NSURL, NSURLResponseInternal;

@interface NSURLResponse : NSObject <Swift>

{
    NSURLResponseInternal *_internal;
    struct URLResponse *__cf_resp_data;
}

@property struct URLResponse *_cf_resp_data;
@property (copy, readonly) NSURL *URL;
@property (copy, readonly) NSString *MIMEType;
@property (readonly) long long expectedContentLength;
@property (copy, readonly) NSString *textEncodingName;
@property (copy, readonly) NSString *suggestedFilename;

+ (_Bool)supportsSecureCoding;
+ (id)getObjectKeyWithIndex:(long long)arg1;
+ (id)_responseWithCFURLResponse:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct URLResponse *)_inner;
- (id)_initWithInternal:(id)arg1;
- (id)_initWithCFURLResponse:(id)arg1;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4;
- (id)_peerCertificateChain;
- (id)_CFURLResponse;
- (void)_setExpectedContentLength:(long long)arg1;
- (void)_setMIMEType:(id)arg1;
- (id)_lastModifiedDate;
- (_Bool)_mustRevalidate;
- (double)_freshnessLifetime;
- (double)_calculatedExpiration;

@end
