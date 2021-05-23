/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolDebuggerBreakpointOptions : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *condition;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) _Bool autoContinue;
@property (nonatomic) int ignoreCount;

@end
