/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPhotoPickerProviderItem.h>

@class NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerGlyphProviderItem : CNPhotoPickerProviderItem

{
    UIView *_symbolImageView;
    NSString *_symbolImageName;
    UIColor *_tintColor;
}

@property (retain, nonatomic) UIView *symbolImageView;
@property (retain, nonatomic) NSString *symbolImageName;
@property (retain, nonatomic) UIColor *tintColor;

+ (id)thumbnailViewForImage:(id)arg1;

- (id)backgroundColorWithTintColor:(id)arg1;
- (unsigned long long)imageType;
- (void)thumbnailViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateTintColorIfNeeded:(id)arg1;
- (id)initWithSymbolImageNamed:(id)arg1;
- (long long)scaleForImageNamed:(id)arg1;
- (id)imageForImageNamed:(id)arg1 withTintColor:(id)arg2;

@end
