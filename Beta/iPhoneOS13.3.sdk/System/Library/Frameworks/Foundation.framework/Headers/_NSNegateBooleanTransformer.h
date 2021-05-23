/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSSharedValueTransformer.h>

__attribute__((visibility("hidden")))
@interface _NSNegateBooleanTransformer : _NSSharedValueTransformer

+ (Class)transformedValueClass;

- (id)description;
- (id)transformedValue:(id)arg1;
- (_Bool)_isBooleanTransformer;

@end
