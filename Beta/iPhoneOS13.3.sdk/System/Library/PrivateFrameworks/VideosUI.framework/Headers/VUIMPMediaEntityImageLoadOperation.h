/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIImageLoadParamsOperation.h>

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntityImageLoadOperation : VUIImageLoadParamsOperation

- (void)executionDidBegin;
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;
- (id)_MPMediaEntityImageLoadParams;
- (void)_finishWithImage:(id)arg1;
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2;

@end
