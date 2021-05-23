/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIGraphicsRendererFormat;

@interface UIGraphicsRendererContext : NSObject

{
    struct CGContext *_backingContext;
    UIGraphicsRendererFormat *_format;
    _Bool ___createsImages;
}

@property (nonatomic) _Bool __createsImages;
@property (nonatomic, readonly) struct CGContext *CGContext;
@property (nonatomic, readonly) UIGraphicsRendererFormat *format;

- (void)dealloc;
- (void)fillRect:(struct CGRect)arg1;
- (void)strokeRect:(struct CGRect)arg1;
- (void)fillRect:(struct CGRect)arg1 blendMode:(int)arg2;
- (void)strokeRect:(struct CGRect)arg1 blendMode:(int)arg2;
- (id)initWithCGContext:(struct CGContext *)arg1 format:(id)arg2;
- (void)clipToRect:(struct CGRect)arg1;

@end
