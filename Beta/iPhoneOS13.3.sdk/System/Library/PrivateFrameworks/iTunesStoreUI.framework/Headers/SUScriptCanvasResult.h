/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface SUScriptCanvasResult : NSObject

{
    UIImage *_image;
    struct CGPath *_path;
}

@property (nonatomic, readonly) UIImage *canvasImage;
@property (nonatomic, readonly) struct CGPath *canvasPath;

- (void)dealloc;
- (id)_initWithCanvas:(id)arg1;

@end
