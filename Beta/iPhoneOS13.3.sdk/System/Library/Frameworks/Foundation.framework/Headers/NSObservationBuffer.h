/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObservationTransformer.h>

@interface NSObservationBuffer : NSObservationTransformer

@property (getter=isMemoryPressureSensitive) _Bool memoryPressureSensitive;
@property (copy) CDUnknownBlockType bufferFullHandler;
@property _Bool automaticallyEmitsObjects;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)bufferWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3;
+ (id)bufferWithOutputQueue:(id)arg1;

- (id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3;
- (void)emitObject;
- (void)emitAllObjects;

@end
