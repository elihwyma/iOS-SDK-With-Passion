/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSDecimalNumber.h>

@interface NSDecimalNumber (PKDecimalNumberAdditions)

+ (id)pk_negativeOne;

- (id)pk_negativeValue;
- (id)pk_absoluteValue;
- (_Bool)pk_isGreaterThanOrEqualTo:(id)arg1;
- (_Bool)pk_isLessThan:(id)arg1;
- (_Bool)pk_isGreaterThan:(id)arg1;
- (_Bool)pk_isLessThanOrEqualTo:(id)arg1;
- (_Bool)pk_isEqualToDecimalNumber:(id)arg1;

@end
