/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentSizer.h>

@class NSString, SXTextLayouter, SXTextResizer;

@interface SXTextComponentSizer : SXComponentSizer

{
    SXTextResizer *_textResizer;
    SXTextLayouter *_textLayouter;
}

@property (retain, nonatomic) SXTextResizer *textResizer;
@property (retain, nonatomic) SXTextLayouter *textLayouter;
@property (nonatomic, readonly) unsigned long long stringLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)textStyleForIdentifier:(id)arg1;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)snapLines;
- (double)verticalPositionForRange:(struct _NSRange)arg1;
- (void)removeAllExclusionPaths;
- (id)existingExclusionPathForComponentWithIdentifier:(id)arg1;
- (void)addExclusionPath:(id)arg1;
- (id)componentTextStyleForTextSource:(id)arg1 inheritingFromDefaultStyles:(_Bool)arg2;
- (id)textResizerForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)additionsForTextSource:(id)arg1;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (id)defaultComponentTextStyleForTextSource:(id)arg1;
- (id)defaultComponentTextStylesForTextSource:(id)arg1;
- (id)linkStyleForTextSource:(id)arg1;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 textComponentLayoutHosting:(id)arg6 textSourceFactory:(id)arg7;

@end
