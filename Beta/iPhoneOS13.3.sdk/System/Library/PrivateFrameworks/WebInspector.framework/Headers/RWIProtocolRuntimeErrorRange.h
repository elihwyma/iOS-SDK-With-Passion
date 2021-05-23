/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolRuntimeErrorRange : RWIProtocolJSONObject

@property (nonatomic) int startOffset;
@property (nonatomic) int endOffset;

- (id)initWithStartOffset:(int)arg1 endOffset:(int)arg2;

@end
