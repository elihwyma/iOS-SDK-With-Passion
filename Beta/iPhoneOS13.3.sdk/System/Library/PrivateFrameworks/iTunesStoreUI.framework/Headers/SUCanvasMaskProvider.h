/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUMaskProvider.h>

@class SUScriptCanvasFunction;

@interface SUCanvasMaskProvider : SUMaskProvider

{
    SUScriptCanvasFunction *_function;
}

- (void)dealloc;
- (id)initWithFunction:(id)arg1;
- (struct CGPath *)copyPathForMaskWithSize:(struct CGSize)arg1;
- (id)copyMaskImageWithSize:(struct CGSize)arg1;

@end
