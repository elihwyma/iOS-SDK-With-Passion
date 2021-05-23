/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIMediaSocialAuthor.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface SKUICommenter : SKUIMediaSocialAuthor

{
    _Bool _isAttributed;
    _Bool _isMySelf;
    _Bool _useImageCopy;
    NSString *_attributedName;
    UIImage *_thumbnailImage;
}

@property (retain, nonatomic) NSString *attributedName;
@property (nonatomic) _Bool isAttributed;
@property (nonatomic) _Bool isMySelf;
@property (nonatomic) _Bool useImageCopy;
@property (copy, nonatomic) UIImage *thumbnailImage;

- (id)initWithAuthor:(id)arg1;

@end
