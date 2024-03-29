/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSValueTransformer.h>

@interface INIntentAppIdentifierSlotValueTransformer : NSValueTransformer

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (Class)reverseTransformedValueClass;
+ (long long)_intents_valueType;

- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;

@end
