/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@interface HFValueTransformer : NSObject

{
    Class _valueClass;
    CDUnknownBlockType _transformBlock;
    CDUnknownBlockType _reverseTransformBlock;
}

@property (retain, nonatomic) Class valueClass;
@property (copy, nonatomic) CDUnknownBlockType transformBlock;
@property (copy, nonatomic) CDUnknownBlockType reverseTransformBlock;

+ (id)transformerForValueClass:(Class)arg1 transformBlock:(CDUnknownBlockType)arg2 reverseTransformBlock:(CDUnknownBlockType)arg3;
+ (id)identityTransformer;

- (id)transformedValueForValue:(id)arg1;
- (id)valueForTransformedValue:(id)arg1;

@end
