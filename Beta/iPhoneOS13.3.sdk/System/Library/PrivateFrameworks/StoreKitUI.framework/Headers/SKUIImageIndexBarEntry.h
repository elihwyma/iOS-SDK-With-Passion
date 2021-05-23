/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIIndexBarEntry.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface SKUIImageIndexBarEntry : SKUIIndexBarEntry

{
    UIImage *_image;
}

@property (nonatomic, readonly) UIImage *image;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithImage:(id)arg1;
- (struct CGSize)_calculatedContentSize;
- (void)_drawContentInRect:(struct CGRect)arg1;
- (id)entryImage;

@end
