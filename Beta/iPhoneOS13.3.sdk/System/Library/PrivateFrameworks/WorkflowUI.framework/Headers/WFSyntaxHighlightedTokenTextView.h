/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTextTokenTextView.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSMutableArray, NSString, WFSyntaxHighlightingPluginManager;

@interface WFSyntaxHighlightedTokenTextView : WFTextTokenTextView <Swift>

{
    NSMutableArray *_lineIndices;
    WFSyntaxHighlightingPluginManager *_pluginManager;
}

@property (retain, nonatomic) WFSyntaxHighlightingPluginManager *pluginManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setVariableString:(id)arg1;
- (void)textUpdated;
- (unsigned long long)currentSyntaxHighlightingAppearance;
- (void)updateHighlighting;
- (void)synchronizeTokenManagerWithTextStorage:(id)arg1;
- (void)updateLineIndicesForTextStorage:(id)arg1;
- (struct _NSRange)lineRangeForCharacterRange:(struct _NSRange)arg1;

@end
