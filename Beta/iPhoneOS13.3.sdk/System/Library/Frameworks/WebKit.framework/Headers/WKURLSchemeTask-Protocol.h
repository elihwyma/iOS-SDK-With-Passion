/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/Swift-Protocol.h>

@class NSURLRequest;

@protocol WKURLSchemeTask <Swift>

@property (copy, nonatomic, readonly) NSURLRequest *request;

- (unsigned short)didReceiveData: /* Error: Ran out of types for this method. */;
- (unsigned short)didReceiveResponse: /* Error: Ran out of types for this method. */;
- (unsigned short)didFinish;
- (unsigned short)didFailWithError: /* Error: Ran out of types for this method. */;

@end
