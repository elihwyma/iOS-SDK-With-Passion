/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/HAPValueTransformer.h>

@interface HAPJSONValueTransformer : HAPValueTransformer

+ (void)initialize;
+ (Class)expectedTransformedClassForFormat:(unsigned long long)arg1;
+ (id)defaultJSONValueTransformer;

- (id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
- (id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;

@end
