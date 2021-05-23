/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIImageViewElement;

__attribute__((visibility("hidden")))
@interface SKUIBrowseItemComponent : SKUIPageComponent

{
    NSString *_title;
    NSString *_subtitle;
    long long _index;
    SKUIImageViewElement *_decorationImage;
    _Bool _showTopBorder;
}

@property (nonatomic, readonly) SKUIImageViewElement *decorationImage;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic) long long index;
@property (nonatomic) _Bool showTopBorder;

- (long long)componentType;
- (id)initWithViewElement:(id)arg1;

@end
