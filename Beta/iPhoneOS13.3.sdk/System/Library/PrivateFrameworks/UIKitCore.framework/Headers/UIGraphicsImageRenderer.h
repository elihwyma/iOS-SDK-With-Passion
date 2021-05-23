/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGraphicsRenderer.h>

@interface UIGraphicsImageRenderer : UIGraphicsRenderer

+ (Class)rendererContextClass;
+ (struct CGContext *)contextWithFormat:(id)arg1;
+ (void)prepareCGContext:(struct CGContext *)arg1 withRendererContext:(id)arg2;

- (id)init;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 format:(id)arg2;
- (id)imageWithActions:(CDUnknownBlockType)arg1;
- (id)initWithBounds:(struct CGRect)arg1 format:(id)arg2;
- (void)pushContext:(id)arg1;
- (void)_prepareContextForReuse:(struct CGContext *)arg1;
- (id)initWithBounds:(struct CGRect)arg1;
- (_Bool)allowsImageOutput;
- (id)PNGDataWithActions:(CDUnknownBlockType)arg1;
- (id)JPEGDataWithCompressionQuality:(double)arg1 actions:(CDUnknownBlockType)arg2;

@end
