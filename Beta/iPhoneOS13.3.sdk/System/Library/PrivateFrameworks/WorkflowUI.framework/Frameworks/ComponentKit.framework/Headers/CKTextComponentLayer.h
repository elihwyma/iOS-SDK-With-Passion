/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <ComponentKit/CKAsyncLayer.h>

@class CKTextComponentLayerHighlighter, CKTextKitRenderer;

@interface CKTextComponentLayer : CKAsyncLayer

{
    CKTextComponentLayerHighlighter *_highlighter;
    CKTextKitRenderer *_renderer;
}

@property (retain, nonatomic) CKTextKitRenderer *renderer;
@property (nonatomic, readonly) CKTextComponentLayerHighlighter *highlighter;

+ (id)defaultValueForKey:(id)arg1;
+ (void)drawInContext:(struct CGContext *)arg1 parameters:(id)arg2;

- (void)setNeedsDisplayOnBoundsChange:(_Bool)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (id)drawParameters;
- (id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1;
- (void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2;

@end
