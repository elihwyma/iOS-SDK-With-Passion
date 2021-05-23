/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPTheme, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface LPCSSResolver : NSObject

{
    _Bool _useInlineStyles;
    _Bool _useVariablesWhenUsingInlineStyles;
    _Bool _includeClassNamesWhenUsingInlineStyles;
    _Bool _includeDarkInterfaceInlineStyles;
    _Bool _generateEmailCompatibleMarkup;
    NSMutableDictionary *_localVariables;
    NSMutableSet *_pendingVariables;
    LPTheme *_theme;
}

@property (nonatomic, readonly) NSMutableDictionary *localVariables;
@property (nonatomic, readonly) NSMutableSet *pendingVariables;
@property (nonatomic, readonly) LPTheme *theme;
@property (nonatomic, readonly) _Bool useCSSVariables;
@property (nonatomic) _Bool useInlineStyles;
@property (nonatomic) _Bool useVariablesWhenUsingInlineStyles;
@property (nonatomic) _Bool includeClassNamesWhenUsingInlineStyles;
@property (nonatomic) _Bool includeDarkInterfaceInlineStyles;
@property (nonatomic) _Bool generateEmailCompatibleMarkup;

- (id)components;
- (id)resolveCSSValue:(id)arg1;
- (void)enumerateResolvedRulesFromRuleDictionary:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)buildCSSDeclarationsFromRuleDictionary:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3 spacer:(id)arg4 forBuffer:(id)arg5;
- (id)ruleDictionaryForStyle:(id)arg1 forComponentClass:(Class)arg2 withDarkInterface:(_Bool)arg3;
- (void)buildPendingVariableSetForRuleDictionary:(id)arg1;
- (id)buildInlineStyleForRuleDictionary:(id)arg1;
- (id)initWithTheme:(id)arg1;
- (id)buildStyleSheet;
- (void)addStyle:(id)arg1 toElement:(id)arg2 inComponent:(id)arg3;
- (void)setStyle:(id)arg1 toElement:(id)arg2 inComponent:(id)arg3;
- (void)registerAlternateStyle:(id)arg1 inComponent:(id)arg2;
- (id)localVariablesAsCSSVariables;
- (id)themeVariablesAsCSSVariables;

@end
