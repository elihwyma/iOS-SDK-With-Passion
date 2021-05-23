/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSFormatter.h>

@interface WBSCreditCardFormatter : NSFormatter

{
    _Bool _showLastFourDigits;
    _Bool _showCreditCardNumber;
    _Bool _allowsUnknownCardTypes;
    _Bool _isVirtualCard;
}

@property (nonatomic) _Bool showLastFourDigits;
@property (nonatomic) _Bool showCreditCardNumber;
@property (nonatomic) _Bool allowsUnknownCardTypes;
@property (nonatomic) _Bool isVirtualCard;

- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (_Bool)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (_Bool)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (id)_formattedStringForNormalizedNumber:(id)arg1 showCreditCardNumber:(_Bool)arg2;
- (struct _NSRange)_normalizedSelectionRangeForFormattedCreditCardNumber:(id)arg1 withOriginalSelectionRange:(struct _NSRange)arg2;
- (struct _NSRange)_selectionRangeInFormattedCreditCardNumber:(id)arg1 forNormalizedSelectionRange:(struct _NSRange)arg2 inNormalizedCreditCardNumber:(id)arg3;

@end
