/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUCellConfiguration.h>

@interface SUArrayCellConfiguration : SUCellConfiguration

{
    unsigned long long _numberOfStrings;
    struct CGRect *_stringFrames;
    id *_strings;
    unsigned long long _numberOfImages;
    struct CGRect *_imageFrames;
    id *_images;
    id *_selectedImages;
}

- (void)dealloc;
- (void)reloadData;
- (void)setLayoutSize:(struct CGSize)arg1;
- (unsigned long long)numberOfImages;
- (unsigned long long)numberOfLabels;
- (id)stringForLabelAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForLabelAtIndex:(unsigned long long)arg1;
- (id)imageAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (struct CGRect)frameForImageAtIndex:(unsigned long long)arg1;
- (void)reloadImages;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (id)initWithStringCount:(unsigned long long)arg1 imageCount:(unsigned long long)arg2;
- (id)_accessibilityStringsArrayPointer;

@end
