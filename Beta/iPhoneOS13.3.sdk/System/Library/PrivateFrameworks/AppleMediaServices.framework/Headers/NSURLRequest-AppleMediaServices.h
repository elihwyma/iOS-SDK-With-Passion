/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <CFNetwork/NSURLRequest.h>

@class NSDictionary;

@interface NSURLRequest (AppleMediaServices)

@property (nonatomic, readonly) NSDictionary *ams_cookies;
@property (nonatomic, readonly) _Bool ams_requestIsBagLoad;

- (id)ams_valueForHTTPHeader:(id)arg1;

@end
