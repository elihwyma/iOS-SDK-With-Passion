/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDSwatchRenderingOperation.h>

@class TSDMovieInfo;

@interface TSDMovieRenderingOperation : TSDSwatchRenderingOperation

{
    TSDMovieInfo *mMovieInfo;
    _Bool mShouldClipVertically;
}

@property (retain) TSDMovieInfo *movieInfo;

- (void)dealloc;
- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 movieInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(_Bool)arg7;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 movieInfo:(id)arg5 documentRoot:(id)arg6;

@end
