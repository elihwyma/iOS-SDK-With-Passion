/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMStyleSheet.h>

@class DOMCSSRule, DOMCSSRuleList;

@interface DOMCSSStyleSheet : DOMStyleSheet

@property (readonly) DOMCSSRule *ownerRule;
@property (readonly) DOMCSSRuleList *cssRules;
@property (readonly) DOMCSSRuleList *rules;

- (unsigned int)insertRule:(id)arg1 index:(unsigned int)arg2;
- (void)deleteRule:(unsigned int)arg1;
- (unsigned int)insertRule:(id)arg1:(unsigned int)arg2;
- (int)addRule:(id)arg1 style:(id)arg2 index:(unsigned int)arg3;
- (void)removeRule:(unsigned int)arg1;

@end
