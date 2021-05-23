/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerBreakpointAction : RWIProtocolJSONObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *data;
@property (nonatomic) int identifier;

- (id)initWithType:(long long)arg1;

@end
