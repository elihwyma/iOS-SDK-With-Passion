/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIFont, UITraitCollection, WFFloatingViewConfiguration;

@interface WFLibraryLayoutMetrics : NSObject

{
    WFFloatingViewConfiguration *_floatingViewConfiguration;
    double _interitemSpacing;
    double _lineSpacing;
    UIFont *_workflowNameFont;
    UITraitCollection *_traitCollection;
    struct CGSize _workflowSize;
    struct UIEdgeInsets _sectionInset;
}

@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) struct UIEdgeInsets sectionInset;
@property (nonatomic, readonly) double interitemSpacing;
@property (nonatomic, readonly) double lineSpacing;
@property (nonatomic, readonly) struct CGSize workflowSize;
@property (nonatomic, readonly) struct CGSize workflowPlusGlyphSize;
@property (nonatomic, readonly) struct UIEdgeInsets workflowContentEdgeInsets;
@property (nonatomic, readonly) UIFont *workflowNameFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGSize workflowGlyphSize;
@property (nonatomic, readonly) unsigned long long appIconFormat;
@property (nonatomic, readonly) WFFloatingViewConfiguration *floatingViewConfiguration;

+ (id)workflowNameFontInDefaultSize;
+ (id)workflowNameFontCompatibleWithTraitCollection:(id)arg1;
+ (id)metricsCompatibleWithTraitCollection:(id)arg1 viewWidth:(double)arg2 layoutMargins:(struct UIEdgeInsets)arg3;
+ (id)metricsCompatibleWithTraitCollection:(id)arg1 viewWidth:(double)arg2 layoutMargins:(struct UIEdgeInsets)arg3 needsTopPadding:(_Bool)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)scaledValueForValue:(double)arg1;
- (id)initWithTraitCollection:(id)arg1 viewWidth:(double)arg2 layoutMargins:(struct UIEdgeInsets)arg3 needsTopPadding:(_Bool)arg4;
- (struct UIEdgeInsets)scaledEdgeInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)capEdgeInsets:(struct UIEdgeInsets)arg1 min:(struct UIEdgeInsets)arg2 max:(struct UIEdgeInsets)arg3;

@end
