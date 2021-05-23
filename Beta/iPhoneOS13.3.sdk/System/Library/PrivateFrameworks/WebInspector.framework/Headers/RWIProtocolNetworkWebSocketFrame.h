/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolNetworkWebSocketFrame : RWIProtocolJSONObject

@property (nonatomic) double opcode;
@property (nonatomic) _Bool mask;
@property (copy, nonatomic) NSString *payloadData;
@property (nonatomic) double payloadLength;

- (id)initWithOpcode:(double)arg1 mask:(_Bool)arg2 payloadData:(id)arg3 payloadLength:(double)arg4;

@end
