/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSData, NSDictionary, NSInputStream, NSString, NSURL, NSURLRequestInternal;

@interface NSURLRequest : NSObject <Swift>

{
    NSURLRequestInternal *_internal;
}

@property (copy, readonly) NSString *HTTPMethod;
@property (copy, readonly) NSDictionary *allHTTPHeaderFields;
@property (copy, readonly) NSData *HTTPBody;
@property (retain, readonly) NSInputStream *HTTPBodyStream;
@property (readonly) _Bool HTTPShouldHandleCookies;
@property (readonly) _Bool HTTPShouldUsePipelining;
@property (readonly) struct URLRequest *_inner;
@property (copy, readonly) NSURL *URL;
@property (readonly) unsigned long long cachePolicy;
@property (readonly) double timeoutInterval;
@property (copy, readonly) NSURL *mainDocumentURL;
@property (readonly) unsigned long long networkServiceType;
@property (readonly) _Bool allowsCellularAccess;
@property (readonly) _Bool allowsExpensiveNetworkAccess;
@property (readonly) _Bool allowsConstrainedNetworkAccess;

+ (_Bool)supportsSecureCoding;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
+ (id)requestWithURL:(id)arg1;
+ (id)getObjectKeyWithIndex:(long long)arg1;
+ (_Bool)allowsAnyHTTPSCertificateForHost:(id)arg1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (double)defaultTimeoutInterval;
+ (void)setAllowsAnyHTTPSCertificate:(_Bool)arg1 forHost:(id)arg2;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
- (id)_CFURLRequest;
- (id)_initWithCFURLRequest:(id)arg1;
- (id)valueForHTTPHeaderField:(id)arg1;
- (id)_initWithInternal:(id)arg1;
- (id)_allHTTPHeaderFieldsAsArrays;
- (double)_payloadTransmissionTimeout;
- (id)_startTimeoutDate;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (const struct __CFURL *)cfURL;
- (_Bool)_URLHasScheme:(id)arg1;
- (_Bool)_isSafeRequestForBackgroundDownload;
- (void)_removePropertyForKey:(id)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_propertyForKey:(id)arg1;
- (_Bool)_schemeWasUpgradedDueToDynamicHSTS;
- (id)boundInterfaceIdentifier;
- (_Bool)_ignoreHSTS;
- (_Bool)_preventHSTSStorage;
- (_Bool)_requiresShortConnectionTimeout;
- (id)_bodyParts;
- (id)HTTPContentType;
- (id)HTTPExtraCookies;
- (id)HTTPReferrer;
- (id)HTTPUserAgent;
- (id)contentDispositionEncodingFallbackArray;
- (unsigned long long)expectedWorkload;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (_Bool)_isIdempotent;

@end
