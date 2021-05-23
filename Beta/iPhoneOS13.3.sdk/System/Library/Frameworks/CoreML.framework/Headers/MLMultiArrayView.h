/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLMultiArray.h>

__attribute__((visibility("hidden")))
@interface MLMultiArrayView : MLMultiArray

{
    MLMultiArray *_parent;
}

@property (nonatomic, readonly) MLMultiArray *parent;

+ (void)squeezeShape:(id)arg1 strides:(id)arg2 resultingShape:(id *)arg3 resultingStrides:(id *)arg4;
+ (_Bool)isSqueezableShape:(id)arg1 dimensions:(id)arg2;
+ (_Bool)isSqueezableShape:(id)arg1;

- (id)initSlicingMultiArray:(id)arg1 origin:(id)arg2 shape:(id)arg3 squeeze:(_Bool)arg4 error:(id *)arg5;
- (id)initSqueezingMultiArray:(id)arg1 dimensions:(id)arg2 error:(id *)arg3;

@end
