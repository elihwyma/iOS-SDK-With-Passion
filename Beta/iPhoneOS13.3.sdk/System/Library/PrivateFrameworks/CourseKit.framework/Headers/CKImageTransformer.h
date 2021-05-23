/*
 Image: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
 */

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface CKImageTransformer : NSValueTransformer

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (void)registerValueTransformer;

- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;

@end
