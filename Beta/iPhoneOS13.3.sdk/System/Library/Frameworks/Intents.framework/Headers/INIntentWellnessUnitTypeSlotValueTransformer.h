/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSValueTransformer.h>

@interface INIntentWellnessUnitTypeSlotValueTransformer : NSValueTransformer

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (Class)reverseTransformedValueClass;

- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;

@end
