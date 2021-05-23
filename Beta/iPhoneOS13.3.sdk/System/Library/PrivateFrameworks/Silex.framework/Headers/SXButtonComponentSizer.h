/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentSizer.h>

@class NSString, SXTextLayouter;

@interface SXButtonComponentSizer : SXComponentSizer

{
    SXTextLayouter *_textLayouter;
}

@property (nonatomic, readonly) SXTextLayouter *textLayouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)textStyleForIdentifier:(id)arg1;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (struct UIEdgeInsets)contentInsetsWithUnitConverter:(id)arg1;
- (id)componentTextStyleForTextSource:(id)arg1 inheritingFromDefaultStyles:(_Bool)arg2;
- (struct UIEdgeInsets)layoutMarginsWithUnitConverter:(id)arg1;
- (id)textResizerForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)additionsForTextSource:(id)arg1;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (id)defaultComponentTextStyleForTextSource:(id)arg1;
- (id)defaultComponentTextStylesForTextSource:(id)arg1;
- (id)linkStyleForTextSource:(id)arg1;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 textProvider:(id)arg6 textComponentLayoutHosting:(id)arg7 textSourceFactory:(id)arg8;

@end
