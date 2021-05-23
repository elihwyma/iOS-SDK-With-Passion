/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@interface NSValueTransformer : NSObject

+ (void)setValueTransformer:(id)arg1 forName:(id)arg2;
+ (_Bool)allowsReverseTransformation;
+ (id)valueTransformerForName:(id)arg1;
+ (id)valueTransformerNames;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;

@end
