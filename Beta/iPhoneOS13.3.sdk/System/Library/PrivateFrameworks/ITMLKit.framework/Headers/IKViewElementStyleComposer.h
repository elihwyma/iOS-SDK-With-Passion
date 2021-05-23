/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKStyleList, IKViewElementStyle;

@interface IKViewElementStyleComposer : NSObject

{
    _Bool _requiresMediaQueryEvaluation;
    _Bool _compositionDone;
    IKViewElementStyleComposer *_defaultStyleComposer;
    IKViewElementStyleComposer *_parentStyleComposer;
    IKStyleList *_styleList;
    IKViewElementStyle *_elementStyleOverrides;
    IKViewElementStyle *_composedSansDefaultStyle;
    IKViewElementStyle *_composedStyle;
}

@property (nonatomic, readonly) _Bool requiresMediaQueryEvaluation;
@property (retain, nonatomic) IKViewElementStyle *composedSansDefaultStyle;
@property (retain, nonatomic) IKViewElementStyle *composedStyle;
@property (retain, nonatomic, readonly) IKViewElementStyleComposer *defaultStyleComposer;
@property (retain, nonatomic, readonly) IKViewElementStyleComposer *parentStyleComposer;
@property (retain, nonatomic, readonly) IKStyleList *styleList;
@property (retain, nonatomic, readonly) IKViewElementStyle *elementStyleOverrides;
@property (nonatomic, readonly, getter=isCompositionDone) _Bool compositionDone;

+ (id)styleComposerWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4;

- (id)composedStyleWithMediaQueryEvaluator:(id)arg1;
- (id)initWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4;
- (void)_composeWithMediaQueryEvaluator:(id)arg1;
- (void)setNeedsRecomposition;
- (id)consolidatedDefaultStyleList;
- (id)composedSansDefaultStyleWithMediaQueryEvaluator:(id)arg1;

@end
