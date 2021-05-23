/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSValueTransformer.h>

@interface ENKeyedArchiverFromDataTransformer : NSValueTransformer

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;

@end
