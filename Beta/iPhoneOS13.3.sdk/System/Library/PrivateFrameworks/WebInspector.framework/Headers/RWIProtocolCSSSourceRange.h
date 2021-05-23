/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolCSSSourceRange : RWIProtocolJSONObject

@property (nonatomic) int startLine;
@property (nonatomic) int startColumn;
@property (nonatomic) int endLine;
@property (nonatomic) int endColumn;

- (id)initWithStartLine:(int)arg1 startColumn:(int)arg2 endLine:(int)arg3 endColumn:(int)arg4;

@end
