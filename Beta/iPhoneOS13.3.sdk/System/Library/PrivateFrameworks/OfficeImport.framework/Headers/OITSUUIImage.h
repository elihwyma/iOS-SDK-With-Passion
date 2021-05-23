/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OITSUImage.h>

@class OITSUUIImageAutoreleasePoolGuard, UIImage;

__attribute__((visibility("hidden")))
@interface OITSUUIImage : OITSUImage

{
    UIImage *mUIImage;
    OITSUUIImageAutoreleasePoolGuard *mGuard;
}

+ (id)imageNamed:(id)arg1;
+ (void)i_performBlockWithUIImageLock:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (struct CGSize)size;
- (double)scale;
- (long long)imageOrientation;
- (struct CGImage *)CGImage;
- (id)UIImage;
- (id)initWithUIImage:(id)arg1;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;
- (id)p_initWithUIImage:(id)arg1 needsGuard:(_Bool)arg2;

@end
