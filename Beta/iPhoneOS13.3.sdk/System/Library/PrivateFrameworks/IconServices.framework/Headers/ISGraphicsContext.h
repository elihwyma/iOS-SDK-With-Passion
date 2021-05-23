/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class ISColor, ISImage, NSData;

__attribute__((visibility("hidden")))
@interface ISGraphicsContext : NSObject

{
    struct CGContext *_cgContext;
    unsigned long long _preset;
}

@property (nonatomic, readonly) unsigned long long preset;
@property (nonatomic, readonly) struct CGContext *cgContext;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) ISImage *image;
@property (nonatomic, readonly) NSData *data;
@property (retain, nonatomic) ISColor *fillColor;
@property (retain, nonatomic) ISColor *strokeColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) struct CGAffineTransform transform;

+ (id)bitmapContextWithSize:(struct CGSize)arg1 scale:(double)arg2 preset:(unsigned long long)arg3;

- (void)dealloc;
- (void)clear;
- (void)fillRect:(struct CGRect)arg1;
- (void)strokeRect:(struct CGRect)arg1;
- (void)drawCGImage:(struct CGImage *)arg1 inRect:(struct CGRect)arg2;
- (void)pushState;
- (void)clipToMaskCGImage:(struct CGImage *)arg1 inRect:(struct CGRect)arg2;
- (void)popState;
- (id)initWithCGContext:(struct CGContext *)arg1 preset:(unsigned long long)arg2;
- (void)strokePath:(struct CGPath *)arg1;
- (void)fillPath:(struct CGPath *)arg1;

@end
