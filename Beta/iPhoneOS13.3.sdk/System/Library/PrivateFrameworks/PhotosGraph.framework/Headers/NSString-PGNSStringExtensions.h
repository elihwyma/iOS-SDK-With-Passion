/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSString.h>

@interface NSString (PGNSStringExtensions)

- (id)_pg_stringByRemovingRegExPattern:(id)arg1;
- (id)pg_stringByTrailingCharactersInSet:(id)arg1 options:(unsigned long long)arg2;
- (id)pg_stringByRemovingParenthesesAndBrackets;
- (id)pg_stringByRemovingParentheses;
- (id)pg_stringByRemovingDates;
- (unsigned long long)pg_levenshteinDistanceToString:(id)arg1;

@end
