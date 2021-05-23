/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerLocation : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *scriptId;
@property (nonatomic) int lineNumber;
@property (nonatomic) int columnNumber;

- (id)initWithScriptId:(id)arg1 lineNumber:(int)arg2;

@end
