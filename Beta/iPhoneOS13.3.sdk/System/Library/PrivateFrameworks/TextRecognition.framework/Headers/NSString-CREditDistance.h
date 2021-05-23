/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

#import <NSString.h>

@interface NSString (CREditDistance)

+ (long long)editDistance:(id)arg1 string:(id)arg2 threshold:(long long)arg3;
+ (long long)editDistance:(id)arg1 string:(id)arg2;

- (_Bool)isUppercase;
- (long long)editDistanceFromString:(id)arg1;
- (long long)editDistanceFromString:(id)arg1 threshold:(long long)arg2;
- (long long)editDistanceFromStringIgnoringSpaces:(id)arg1 threshold:(long long)arg2;
- (_Bool)isLowercase;
- (_Bool)isCaseApplicable;

@end
