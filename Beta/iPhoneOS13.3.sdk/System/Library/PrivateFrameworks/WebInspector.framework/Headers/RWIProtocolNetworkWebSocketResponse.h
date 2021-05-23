/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkWebSocketResponse : RWIProtocolJSONObject

@property (nonatomic) int status;
@property (copy, nonatomic) NSString *statusText;
@property (retain, nonatomic) RWIProtocolNetworkHeaders *headers;

- (id)initWithStatus:(int)arg1 statusText:(id)arg2 headers:(id)arg3;

@end
