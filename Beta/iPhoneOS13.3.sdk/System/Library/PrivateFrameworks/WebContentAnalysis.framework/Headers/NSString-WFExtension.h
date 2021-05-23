/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <Foundation/NSString.h>

@interface NSString (WFExtension)

+ (id)WF_ignorableCharacterSet;
+ (id)WF_stringFromArray:(id)arg1;

- (_Bool)WF_containsString:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)WF_rangeOfWord:(id)arg1;
- (id)WF_stringByReplacingString:(id)arg1 withString:(id)arg2;
- (_Bool)_isIPv4DomainAddress;
- (_Bool)WF_containsString:(id)arg1;
- (_Bool)WF_containsWord:(id)arg1;
- (id)WF_stringByRemovingWord:(id)arg1;
- (id)WF_stringByEscapingPrintfArguments;
- (id)WF_stringByConvertingSpacesInHTMLSpaces;
- (id)WF_fuzzyStringWithWordLength:(int)arg1;
- (long long)WF_numericCompare:(id)arg1;
- (id)WF_stringByProperlyFixingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)WF_stringWithMostSignificatDomainPart;

@end
