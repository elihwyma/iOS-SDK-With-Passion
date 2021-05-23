/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class JSContext, JSManagedValue, NSMutableArray;

@interface WFSyntaxHighlightingPluginManager : NSObject

{
    JSContext *_context;
    NSMutableArray *_tokenLines;
    unsigned long long _minimumChangedLine;
    unsigned long long _maxChangedLine;
    JSManagedValue *_colorScheme;
    JSManagedValue *_highlightingPlugin;
    JSManagedValue *_syntaxPlugin;
    unsigned long long _syntaxHighlightingType;
    unsigned long long _syntaxHighlightingAppearance;
}

@property (nonatomic) unsigned long long syntaxHighlightingType;
@property (nonatomic) unsigned long long syntaxHighlightingAppearance;

- (id)init;
- (void)dealloc;
- (id)defaultBackgroundColor;
- (id)configurationFilesForAppearance:(unsigned long long)arg1;
- (void)didAddLineAtIndex:(unsigned long long)arg1;
- (void)didRemoveLineAtIndex:(unsigned long long)arg1;
- (_Bool)didChangeLine:(unsigned long long)arg1 string:(id)arg2;
- (void)discardManagedReferencesForLineNumber:(unsigned long long)arg1;
- (void)highlightAllTokensWithCallback:(CDUnknownBlockType)arg1;
- (void)loadPlugins;
- (void)reloadPlugins;
- (void)unloadPlugins;
- (id)loadPluginUsingConfigWithModuleName:(id)arg1 module:(id)arg2;
- (void)loadColorSchemePlugin;
- (void)loadHighlightingPlugin;
- (void)loadSyntaxPlugin;
- (id)defaultForegroundColor;

@end
