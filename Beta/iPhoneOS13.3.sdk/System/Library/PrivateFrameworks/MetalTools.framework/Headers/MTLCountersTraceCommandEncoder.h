/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLCountersTraceCommandEncoder : NSObject

{
    struct BinaryBuffer *_stream;
    unsigned long long _flags;
    struct _NSRange _segment;
}

@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) struct _NSRange segment;

- (void)endEncoding;
- (void)setLabel:(id)arg1;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (void)insertDebugSignpost:(id)arg1;
- (id)init:(struct BinaryBuffer *)arg1 flags:(unsigned long long)arg2;

@end
