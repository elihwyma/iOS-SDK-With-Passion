/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerBreakpointPauseReason : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *breakpointId;

- (id)initWithBreakpointId:(id)arg1;

@end
