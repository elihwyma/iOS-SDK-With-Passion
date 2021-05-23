/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <Foundation/NSURLRequest.h>

@interface NSURLRequest (TRI)

- (id)triJSONString;
- (id)triJSONStringWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)triHTTPBodyAsJsonObj;

@end
