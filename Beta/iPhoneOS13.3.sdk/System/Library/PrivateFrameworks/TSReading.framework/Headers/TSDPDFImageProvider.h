/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDImageProvider.h>

@interface TSDPDFImageProvider : TSDImageProvider

{
    struct CGPDFDocument *mPDFDocument;
    struct CGSize mNaturalSize;
}

- (void)dealloc;
- (_Bool)isValid;
- (void)flush;
- (struct CGSize)naturalSize;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (struct CGPDFDocument *)CGPDFDocument;
- (_Bool)hasFlushableContent;
- (void)p_loadIfNecessary;
- (struct CGPDFDocument *)p_load;
- (long long)pageAngle;

@end
