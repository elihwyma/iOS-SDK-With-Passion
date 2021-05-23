/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBRenderFactoryiPhone.h>

@class UIKBRenderFactory;

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone

{
    UIKBRenderFactory *_overlayFactory;
}

- (void)dealloc;
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(_Bool)arg2;
- (struct UIEdgeInsets)wideShadowPaddleInsets;
- (double)popupFontSize;
- (struct CGPoint)popupSymbolTextOffset;
- (struct UIEdgeInsets)wideShadowPopupMenuInsets;
- (struct CGPoint)variantSymbolTextOffset;
- (struct CGPoint)variantAnnotationTextOffset;
- (struct UIEdgeInsets)variantSymbolFrameInsets;
- (struct UIEdgeInsets)variantPaddedFrameInsets;
- (_Bool)isTallPopup;
- (Class)_overlayFactoryClass;

@end
