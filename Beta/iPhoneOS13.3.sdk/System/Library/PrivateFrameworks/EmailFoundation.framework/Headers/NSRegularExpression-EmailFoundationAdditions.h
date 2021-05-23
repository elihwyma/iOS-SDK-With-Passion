/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSRegularExpression.h>

@interface NSRegularExpression (EmailFoundationAdditions)

+ (id)ef_regularExpressionForQuotedStringsInLocales:(id)arg1;

- (void)ef_enumerateTokensInString:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)ef_stringByRemovingTokensFromString:(id)arg1 matchingOptions:(unsigned long long)arg2 tokenizationOptions:(unsigned long long)arg3 tokenizationHandler:(CDUnknownBlockType)arg4;
- (id)ef_stringByRemovingTokensFromString:(id)arg1 tokenizationHandler:(CDUnknownBlockType)arg2;

@end
