/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGraphicsRenderer.h>

@interface UIGraphicsPDFRenderer : UIGraphicsRenderer

+ (Class)rendererContextClass;
+ (struct CGContext *)contextWithFormat:(id)arg1;
+ (void)prepareCGContext:(struct CGContext *)arg1 withRendererContext:(id)arg2;

- (id)init;
- (id)initWithBounds:(struct CGRect)arg1 format:(id)arg2;
- (void)pushContext:(id)arg1;
- (void)popContext:(id)arg1;
- (id)initWithBounds:(struct CGRect)arg1;
- (_Bool)writePDFToURL:(id)arg1 withActions:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)PDFDataWithActions:(CDUnknownBlockType)arg1;

@end
