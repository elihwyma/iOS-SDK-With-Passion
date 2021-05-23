/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKJSInspectorController, IKViewElementStyleFactory, NSMapTable, NSMutableDictionary, NSString, RWIProtocolCSSStyleSheetHeader;

@interface IKJSInspectorCSSAgent : NSObject

{
    NSMutableDictionary *_inlineStyleMap;
    RWIProtocolCSSStyleSheetHeader *_templateStylesheetHeader;
    IKViewElementStyleFactory *_styleFactory;
    NSMapTable *_authorStylesheets;
    IKJSInspectorController *_controller;
}

@property (weak, nonatomic, readonly) IKJSInspectorController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_evaluator:(id)arg1 updateMediaStylesWithActiveStyles:(id)arg2 inActiveStyles:(id)arg3 defaultStyles:(id)arg4 forRule:(id)arg5 withMatch:(id)arg6;

- (void)enableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)disableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (id)initWithInspectorController:(id)arg1;
- (void)updateStylesheets;
- (void)resetStylesFromNode:(id)arg1;
- (void)mediaQueryResultDidChange;
- (id)_getMatchedStyleRulesForNode:(id)arg1;
- (id)_getMatchedTemplateStylesForNode:(id)arg1;
- (id)_updatedInlineStyleForNode:(int)arg1 withStyleString:(id)arg2;
- (id)_stylesheetBodyForStylesheetId:(id)arg1;
- (id)_styleNodeForStylesheetId:(id)arg1;
- (void)getMatchedStylesForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 includePseudo:(_Bool *)arg4 includeInherited:(_Bool *)arg5;
- (void)getInlineStylesForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;
- (void)getComputedStyleForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;
- (void)getAllStyleSheetsWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)getStyleSheetWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleSheetId:(id)arg3;
- (void)getStyleSheetTextWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleSheetId:(id)arg3;
- (void)setStyleSheetTextWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleSheetId:(id)arg3 text:(id)arg4;
- (void)setStyleTextWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleId:(id)arg3 text:(id)arg4;
- (void)setRuleSelectorWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 ruleId:(id)arg3 selector:(id)arg4;
- (void)createStyleSheetWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 frameId:(id)arg3;
- (void)addRuleWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleSheetId:(id)arg3 selector:(id)arg4;
- (void)getSupportedCSSPropertiesWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)getSupportedSystemFontFamilyNamesWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)forcePseudoStateWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 forcedPseudoClasses:(id)arg4;

@end
