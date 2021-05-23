/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSData;

@protocol GEOResourceLoadOperation <Swift>

@property (nonatomic) _Bool requiresWiFi;
@property (nonatomic) _Bool preferDirectNetworking;
@property (nonatomic, readonly) NSData *data;

- (unsigned short)cancel;
- (unsigned short)startWithCompletionHandler:callbackQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithResource:existingPartialData:auditToken:baseURL:proxyURL:log: /* Error: Ran out of types for this method. */;

@end
