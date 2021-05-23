/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigDelegateStorage;

@interface FigCameraViewfinderSession : NSObject

{
    FigDelegateStorage *_delegateStorage;
}

- (id)init;
- (void)dealloc;
- (void)openPreviewStreamWithOptions:(id)arg1;
- (void)closePreviewStream;

@end
