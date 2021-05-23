/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@protocol RWIProtocolCSSDomainHandler <Swift>

- (unsigned short)enableWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)disableWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)getMatchedStylesForNodeWithErrorCallback:successCallback:nodeId:includePseudo:includeInherited: /* Error: Ran out of types for this method. */;
- (unsigned short)getInlineStylesForNodeWithErrorCallback:successCallback:nodeId: /* Error: Ran out of types for this method. */;
- (unsigned short)getComputedStyleForNodeWithErrorCallback:successCallback:nodeId: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllStyleSheetsWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)getStyleSheetWithErrorCallback:successCallback:styleSheetId: /* Error: Ran out of types for this method. */;
- (unsigned short)getStyleSheetTextWithErrorCallback:successCallback:styleSheetId: /* Error: Ran out of types for this method. */;
- (unsigned short)setStyleSheetTextWithErrorCallback:successCallback:styleSheetId:text: /* Error: Ran out of types for this method. */;
- (unsigned short)setStyleTextWithErrorCallback:successCallback:styleId:text: /* Error: Ran out of types for this method. */;
- (unsigned short)setRuleSelectorWithErrorCallback:successCallback:ruleId:selector: /* Error: Ran out of types for this method. */;
- (unsigned short)createStyleSheetWithErrorCallback:successCallback:frameId: /* Error: Ran out of types for this method. */;
- (unsigned short)addRuleWithErrorCallback:successCallback:styleSheetId:selector: /* Error: Ran out of types for this method. */;
- (unsigned short)getSupportedCSSPropertiesWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)getSupportedSystemFontFamilyNamesWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)forcePseudoStateWithErrorCallback:successCallback:nodeId:forcedPseudoClasses: /* Error: Ran out of types for this method. */;

@end
