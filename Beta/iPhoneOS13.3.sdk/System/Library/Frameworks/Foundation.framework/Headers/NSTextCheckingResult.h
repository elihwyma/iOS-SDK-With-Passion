/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@interface NSTextCheckingResult : NSObject <Swift>

@property (readonly) unsigned long long resultType;
@property (readonly) struct _NSRange range;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)orthographyCheckingResultWithRange:(struct _NSRange)arg1 orthography:(id)arg2;
+ (id)spellCheckingResultWithRange:(struct _NSRange)arg1;
+ (id)grammarCheckingResultWithRange:(struct _NSRange)arg1 details:(id)arg2;
+ (id)dateCheckingResultWithRange:(struct _NSRange)arg1 date:(id)arg2;
+ (id)dateCheckingResultWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
+ (id)addressCheckingResultWithRange:(struct _NSRange)arg1 components:(id)arg2;
+ (id)linkCheckingResultWithRange:(struct _NSRange)arg1 URL:(id)arg2;
+ (id)quoteCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;
+ (id)dashCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;
+ (id)replacementCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;
+ (id)correctionCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;
+ (id)correctionCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3;
+ (id)regularExpressionCheckingResultWithRanges:(struct _NSRange *)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;
+ (id)phoneNumberCheckingResultWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2;
+ (id)transitInformationCheckingResultWithRange:(struct _NSRange)arg1 components:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (id)date;
- (id)timeZone;
- (id)URL;
- (id)components;
- (unsigned long long)numberOfRanges;
- (void)encodeRangeWithCoder:(id)arg1;
- (struct _NSRange)decodeRangeWithCoder:(id)arg1;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (struct _NSRange)rangeWithName:(id)arg1;
- (id)orthography;
- (id)grammarDetails;
- (double)duration;
- (id)referenceDate;
- (id)leadingText;
- (id)trailingText;
- (id)addressComponents;
- (id)replacementString;
- (id)alternativeStrings;
- (id)regularExpression;
- (id)phoneNumber;
- (void *)underlyingResult;
- (_Bool)timeIsSignificant;
- (_Bool)timeIsApproximate;
- (_Bool)timeIsPast;

@end
