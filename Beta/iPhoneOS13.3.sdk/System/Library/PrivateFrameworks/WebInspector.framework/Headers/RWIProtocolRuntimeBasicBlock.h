/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolRuntimeBasicBlock : RWIProtocolJSONObject

@property (nonatomic) int startOffset;
@property (nonatomic) int endOffset;
@property (nonatomic) _Bool hasExecuted;
@property (nonatomic) int executionCount;

- (id)initWithStartOffset:(int)arg1 endOffset:(int)arg2 hasExecuted:(_Bool)arg3 executionCount:(int)arg4;

@end
