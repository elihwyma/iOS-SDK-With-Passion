/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <WebInspector/RWIProtocolNetworkResponse.h>

@interface RWIProtocolNetworkResponse (IKJSInspector)

+ (id)ik_responseFromURLResponse:(id)arg1 forRequest:(id)arg2;
+ (id)safe_initWithUrl:(id)arg1 status:(int)arg2 statusText:(id)arg3 headers:(id)arg4 mimeType:(id)arg5 source:(long long)arg6;
+ (id)ik_responseFromURLResponse:(id)arg1;

@end
