/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@class NSString;

@interface CATextLayer : CALayer

{
    struct CATextLayerPrivate *_state;
}

@property (copy) id truncationString;
@property (readonly, getter=isTruncated) _Bool truncated;
@property (copy) id string;
@property const void *font;
@property double fontSize;
@property struct CGColor *foregroundColor;
@property (getter=isWrapped) _Bool wrapped;
@property (copy) NSString *truncationMode;
@property (copy) NSString *alignmentMode;
@property _Bool allowsFontSubpixelQuantization;

+ (_Bool)needsDisplayForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

- (id)init;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (struct CGSize)_preferredSize;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)_createStringDict;
- (struct __CTTypesetter *)_retainTypesetter;
- (struct __CTLine *)_createTruncationToken;
- (void)_applyLinesToFunction:(CDUnknownFunctionPointerType)arg1 info:(void *)arg2;
- (void)_applyLinesToFunction:(CDUnknownFunctionPointerType)arg1 info:(void *)arg2 truncated:(_Bool *)arg3;
- (void)_drawLine:(struct __CTLine *)arg1 inContext:(struct CGContext *)arg2 atPoint:(struct CGPoint)arg3;
- (void)_prepareContext:(struct CGContext *)arg1;
- (_Bool)wrapped;

@end
