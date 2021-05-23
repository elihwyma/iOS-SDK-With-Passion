/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/MTLValueTransformer.h>

@interface MTLReversibleValueTransformer : MTLValueTransformer

+ (_Bool)allowsReverseTransformation;

- (id)reverseTransformedValue:(id)arg1;
- (id)initWithForwardBlock:(CDUnknownBlockType)arg1 reverseBlock:(CDUnknownBlockType)arg2;
- (id)reverseTransformedValue:(id)arg1 success:(_Bool *)arg2 error:(id *)arg3;

@end
