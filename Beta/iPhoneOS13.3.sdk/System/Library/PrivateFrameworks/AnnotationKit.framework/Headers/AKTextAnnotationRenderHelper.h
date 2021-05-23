/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKTextAnnotationRenderHelper : NSObject

+ (void)renderAnnotationText:(id)arg1 intoContext:(struct CGContext *)arg2 isForScreen:(_Bool)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGSize)unconstrainedSizeForText:(id)arg1;
+ (id)_sharedLayoutManager;
+ (_Bool)_hitTestPoint:(struct CGPoint)arg1 againstActualTextForAnnotation:(id)arg2 onPageController:(id)arg3 contextForVisualDebugging:(struct CGContext *)arg4;
+ (void)getAnnotationRectangle:(struct CGRect *)arg1 textBounds:(struct CGRect *)arg2 containerSize:(struct CGSize *)arg3 exclusionPaths:(id *)arg4 isTextClipped:(_Bool *)arg5 forAnnotation:(id)arg6 onPageController:(id)arg7 orInContext:(struct CGContext *)arg8 shouldAlignToPixels:(_Bool)arg9 optionalText:(id)arg10 optionalCenter:(struct CGPoint)arg11 optionalProposedRectangle:(struct CGRect)arg12;
+ (_Bool)hitTestPoint:(struct CGPoint)arg1 againstActualTextForAnnotation:(id)arg2 onPageController:(id)arg3;

@end
