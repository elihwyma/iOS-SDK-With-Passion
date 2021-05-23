/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkWebSocketRequest : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolNetworkHeaders *headers;

- (id)initWithHeaders:(id)arg1;

@end
