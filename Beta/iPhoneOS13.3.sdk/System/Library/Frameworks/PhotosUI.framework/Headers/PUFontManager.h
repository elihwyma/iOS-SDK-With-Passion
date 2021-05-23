/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXObservable.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface PUFontManager : PXObservable

{
    UIFont *_albumListTitleLabelFont;
    UIFont *_albumListSubtitleLabelFont;
    UIFont *_albumListSectionTitleLabelFont;
}

@property (retain, nonatomic) UIFont *albumListTitleLabelFont;
@property (retain, nonatomic) UIFont *albumListSubtitleLabelFont;
@property (retain, nonatomic) UIFont *albumListSectionTitleLabelFont;

- (id)init;
- (void)dealloc;
- (void)invalidateFonts;
- (void)_setNeedsUpdate;
- (id)mutableChangeObject;
- (void)_preferredContentSizeChanged:(id)arg1;

@end
