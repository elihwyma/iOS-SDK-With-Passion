/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <CFNetwork/NSURLResponse.h>

@class NSDictionary;

@interface NSURLResponse (AppleMediaServices)

@property (nonatomic, readonly) double ams_expirationInterval;
@property (nonatomic, readonly) NSDictionary *ams_headers;
@property (nonatomic, readonly) unsigned long long ams_statusCode;

- (_Bool)_getCacheControlMaxAge:(double *)arg1;
- (id)ams_valueForHTTPHeader:(id)arg1;

@end
