/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLRequest.h>

@class NSData, NSDictionary, NSInputStream, NSString, NSURL;

@interface NSMutableURLRequest : NSURLRequest

@property (copy) NSString *HTTPMethod;
@property (copy) NSDictionary *allHTTPHeaderFields;
@property (copy) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property _Bool HTTPShouldHandleCookies;
@property _Bool HTTPShouldUsePipelining;
@property (copy) NSURL *URL;
@property unsigned long long cachePolicy;
@property double timeoutInterval;
@property (copy) NSURL *mainDocumentURL;
@property unsigned long long networkServiceType;
@property _Bool allowsCellularAccess;
@property _Bool allowsExpensiveNetworkAccess;
@property _Bool allowsConstrainedNetworkAccess;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)_setIgnoreHSTS:(_Bool)arg1;
- (void)setBoundInterfaceIdentifier:(id)arg1;
- (void)setHTTPContentType:(id)arg1;
- (void)setHTTPExtraCookies:(id)arg1;
- (void)setHTTPReferrer:(id)arg1;
- (void)setHTTPUserAgent:(id)arg1;
- (void)setRequestPriority:(unsigned long long)arg1;
- (unsigned long long)requestPriority;
- (void)setExpectedWorkload:(unsigned long long)arg1;
- (void)_setTimeWindowDelay:(double)arg1;
- (void)_setTimeWindowDuration:(double)arg1;
- (void)_setStartTimeoutDate:(id)arg1;
- (void)_setRequiresShortConnectionTimeout:(_Bool)arg1;
- (void)_setPreventHSTSStorage:(_Bool)arg1;
- (void)_setPayloadTransmissionTimeout:(double)arg1;
- (void)setContentDispositionEncodingFallbackArray:(id)arg1;

@end
