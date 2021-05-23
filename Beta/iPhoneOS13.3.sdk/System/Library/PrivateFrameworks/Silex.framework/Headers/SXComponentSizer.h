/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SXLayoutOptions;

@protocol SXComponent, SXComponentLayout, SXComponentStyle, SXDOMObjectProviding;

@interface SXComponentSizer : NSObject

{
    id <SXComponent> _component;
    id <SXComponentLayout> _componentLayout;
    id <SXComponentStyle> _componentStyle;
    id <SXDOMObjectProviding> _DOMObjectProvider;
    SXLayoutOptions *_layoutOptions;
    NSMutableDictionary *_infoForRendering;
    struct CGSize _suggestedSize;
}

@property (nonatomic) struct CGSize suggestedSize;
@property (nonatomic, readonly) NSMutableDictionary *infoForRendering;
@property (nonatomic, readonly) id <SXComponent> component;
@property (nonatomic, readonly) id <SXComponentLayout> componentLayout;
@property (nonatomic, readonly) id <SXComponentStyle> componentStyle;
@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (nonatomic, readonly) SXLayoutOptions *layoutOptions;

- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)snapLines;
- (struct UIEdgeInsets)contentInsetsWithUnitConverter:(id)arg1;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1;
- (unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)arg1;
- (long long)minimumColumnLength;
- (struct _NSRange)overrideColumnLayoutForColumnRange:(struct _NSRange)arg1 inColumnLayout:(id)arg2;
- (_Bool)allowComponentIntersection;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5;
- (struct UIEdgeInsets)layoutMarginsWithUnitConverter:(id)arg1;
- (struct UIEdgeInsets)bordersInsetsWithUnitConverter:(id)arg1;
- (void)saveInfo:(id)arg1 forRenderingPhaseWithIdentifier:(id)arg2;

@end
