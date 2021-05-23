/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSValueTransformer.h>

@class NSString;

@interface MTLValueTransformer : NSValueTransformer

{
    CDUnknownBlockType _forwardBlock;
    CDUnknownBlockType _reverseBlock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType forwardBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType reverseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (id)transformerUsingForwardBlock:(CDUnknownBlockType)arg1;
+ (id)transformerUsingReversibleBlock:(CDUnknownBlockType)arg1;
+ (id)transformerUsingForwardBlock:(CDUnknownBlockType)arg1 reverseBlock:(CDUnknownBlockType)arg2;
+ (id)reversibleTransformerWithBlock:(CDUnknownBlockType)arg1;
+ (id)reversibleTransformerWithForwardBlock:(CDUnknownBlockType)arg1 reverseBlock:(CDUnknownBlockType)arg2;
+ (id)transformerWithBlock:(CDUnknownBlockType)arg1;

- (id)transformedValue:(id)arg1;
- (id)initWithForwardBlock:(CDUnknownBlockType)arg1 reverseBlock:(CDUnknownBlockType)arg2;
- (id)transformedValue:(id)arg1 success:(_Bool *)arg2 error:(id *)arg3;

@end
