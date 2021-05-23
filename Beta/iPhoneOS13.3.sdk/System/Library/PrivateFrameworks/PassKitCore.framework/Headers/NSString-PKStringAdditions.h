/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSString.h>

@interface NSString (PKStringAdditions)

- (id)pk_uppercaseFirstStringForPreferredLocale;
- (id)pk_uppercaseFirstStringForLocale:(id)arg1;
- (id)pk_uppercaseStringForPreferredLocale;
- (id)decodeHexadecimal;
- (id)pk_lowercaseStringForPreferredLocale;
- (id)pk_capitalizedStringForPreferredLocale;
- (id)pk_uppercaseAttributedString;
- (double)pk_normalizedLevenshteinDistanceFromString:(id)arg1 decimalPlaces:(unsigned long long)arg2;
- (id)pk_zString;

@end
