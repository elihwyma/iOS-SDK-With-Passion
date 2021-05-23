/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@interface HAPValueTransformer : HMFObject

+ (Class)expectedTransformedClassForFormat:(unsigned long long)arg1;
+ (Class)expectedClassForFormat:(unsigned long long)arg1;

- (id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
- (id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;

@end
