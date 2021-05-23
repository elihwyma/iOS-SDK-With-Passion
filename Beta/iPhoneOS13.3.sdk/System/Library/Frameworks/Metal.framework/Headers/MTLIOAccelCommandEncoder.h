/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLCommandEncoder.h>

@interface MTLIOAccelCommandEncoder : _MTLCommandEncoder

- (void)endEncoding;
- (void)setLabel:(id)arg1;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (unsigned long long)globalTraceObjectID;
- (id)initWithCommandBuffer:(id)arg1;

@end
