/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSCache, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewImageRenderer : NSObject

{
    UIView *_viewForTraitCollection;
    NSCache *_imageCache;
}

@property (retain, nonatomic) NSCache *imageCache;
@property (weak, nonatomic) UIView *viewForTraitCollection;

+ (id)sharedImageRenderer;

- (id)init;
- (id)highlightedBarCellBackgroundImageWithColor:(id)arg1 insets:(struct UIEdgeInsets)arg2;
- (id)pocketShadowImageForDarkKeyboard:(_Bool)arg1 fadesToBottom:(_Bool)arg2 drawShadow:(_Bool)arg3 topPadding:(double)arg4 bottomPadding:(double)arg5 height:(double)arg6;
- (id)handwritingCellBackgroundImageForDarkKeyboard:(_Bool)arg1 highlighted:(_Bool)arg2;
- (id)extensionMaskImage;

@end
