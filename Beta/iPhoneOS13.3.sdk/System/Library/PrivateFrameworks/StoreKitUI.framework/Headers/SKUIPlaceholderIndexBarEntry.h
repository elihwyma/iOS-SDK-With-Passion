/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIIndexBarEntry.h>

__attribute__((visibility("hidden")))
@interface SKUIPlaceholderIndexBarEntry : SKUIIndexBarEntry

{
    struct CGSize _placeholderSize;
}

@property (nonatomic, readonly) struct CGSize placeholderSize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPlaceholderSize:(struct CGSize)arg1;
- (struct CGSize)_calculatedContentSize;

@end
