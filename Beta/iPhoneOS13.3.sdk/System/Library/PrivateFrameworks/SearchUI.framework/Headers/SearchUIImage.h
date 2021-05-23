/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchFoundation/SFImage.h>

@class UIImage;

@interface SearchUIImage : SFImage

{
    _Bool _useFastPathShadow;
    _Bool _needsTinting;
    UIImage *_uiImage;
    SFImage *_sfImage;
}

@property (retain, nonatomic) SFImage *sfImage;
@property (retain, nonatomic) UIImage *uiImage;
@property (nonatomic) _Bool useFastPathShadow;
@property (nonatomic) _Bool needsTinting;

+ (id)imageWithSFImage:(id)arg1;
+ (id)imageWithSFImage:(id)arg1 variantForAppIcon:(unsigned long long)arg2;
+ (_Bool)isEqualHasSubclassOverrideForImage1:(id)arg1 image2:(id)arg2;
+ (_Bool)isEqualHasSubclassOverrideForImage:(id)arg1;
+ (_Bool)image:(id)arg1 isEqualToImage:(id)arg2;
+ (id)imageForSuggestionCardSectionType:(int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct CGSize)size;
- (double)scale;
- (id)initWithImage:(id)arg1;
- (double)cornerRadius;
- (_Bool)isTemplate;
- (id)imageData;
- (_Bool)shouldCropToCircle;
- (id)loadImage;
- (id)initWithSFImage:(id)arg1;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
