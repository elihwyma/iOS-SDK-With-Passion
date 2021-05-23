/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UIKeyboardBIUImageGenerator : NSObject

{
    _Bool _useButtonShapes;
    UIImage *_biuBoldImage;
    UIImage *_biuItalicImage;
    UIImage *_biuUnderlineImage;
    NSMutableDictionary *_imageCache;
    UIColor *_tintColor;
    UIColor *_normalColor;
}

@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *normalColor;

- (id)init;
- (void)_invalidateCache;
- (void)_accessibilitySettingsChanged:(id)arg1;
- (void)_drawBIUAtSize:(struct CGSize)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3 underline:(_Bool)arg4;
- (id)BIUImageForBold:(_Bool)arg1 italic:(_Bool)arg2 underline:(_Bool)arg3;

@end
