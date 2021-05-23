/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders, RWIProtocolNetworkResourceTiming, RWIProtocolSecurity;

@interface RWIProtocolNetworkResponse : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *statusText;
@property (retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) long long source;
@property (retain, nonatomic) RWIProtocolNetworkHeaders *requestHeaders;
@property (retain, nonatomic) RWIProtocolNetworkResourceTiming *timing;
@property (retain, nonatomic) RWIProtocolSecurity *security;

- (id)initWithUrl:(id)arg1 status:(int)arg2 statusText:(id)arg3 headers:(id)arg4 mimeType:(id)arg5 source:(long long)arg6;

@end
