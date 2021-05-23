/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMCSSRule.h>

@class DOMCSSRuleList, DOMMediaList;

@interface DOMCSSMediaRule : DOMCSSRule

@property (readonly) DOMMediaList *media;
@property (readonly) DOMCSSRuleList *cssRules;

- (unsigned int)insertRule:(id)arg1 index:(unsigned int)arg2;
- (void)deleteRule:(unsigned int)arg1;
- (unsigned int)insertRule:(id)arg1:(unsigned int)arg2;

@end
