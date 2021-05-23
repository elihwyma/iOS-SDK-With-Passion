/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSAttributedString, NSString, NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIBadgeViewElement : SKUIViewElement

{
    UIImage *_fallbackImage;
    _Bool _hasValidFallbackImage;
    NSString *_resourceName;
    struct CGSize _size;
    NSString *_text;
    NSURL *_url;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) long long badgeType;
@property (nonatomic, readonly) UIImage *fallbackImage;
@property (nonatomic, readonly) NSString *resourceName;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) NSURL *URL;

- (id)accessibilityText;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
