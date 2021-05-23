/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolConsoleCallFrame : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *scriptId;
@property (nonatomic) int lineNumber;
@property (nonatomic) int columnNumber;

- (id)initWithFunctionName:(id)arg1 url:(id)arg2 scriptId:(id)arg3 lineNumber:(int)arg4 columnNumber:(int)arg5;

@end
