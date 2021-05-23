/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <SilexWeb/Swift-Protocol.h>

@class NSString, NSURLRequest;

@protocol SWMessageSecurityOrigin <Swift>

@property (nonatomic, readonly) NSString *protocol;
@property (nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) NSURLRequest *request;

@end
