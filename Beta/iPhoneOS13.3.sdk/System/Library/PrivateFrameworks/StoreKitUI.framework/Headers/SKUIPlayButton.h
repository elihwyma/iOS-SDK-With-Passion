/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPlayButtonControl.h>

@class NSString, SKUIPlayButtonImageCache;

@interface SKUIPlayButton : SKUIPlayButtonControl

{
    _Bool _showStop;
    SKUIPlayButtonImageCache *_imageCache;
    _Bool _showOnDemand;
    long long _itemIdentifier;
    NSString *_playItemIdentifier;
    long long _style;
    NSString *_mediaURLString;
}

@property (nonatomic, readonly) SKUIPlayButtonImageCache *imageCache;
@property (nonatomic) long long itemIdentifier;
@property (copy, nonatomic) NSString *playItemIdentifier;
@property (nonatomic) _Bool showOnDemand;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *mediaURLString;
@property (nonatomic) _Bool useLargeButton;
@property (nonatomic, getter=isRadio) _Bool radio;

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void)setEnabled:(_Bool)arg1;
- (id)images;
- (void)refresh;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (id)defaultBackgroundColor;
- (void)setBackgroundType:(long long)arg1;
- (struct CGSize)buttonSize;
- (void)_updateEnabledState;
- (id)outerBorderColor;
- (float)buttonCornerRadius;
- (id)playImage;
- (void)reloadWithItemStatus:(id)arg1 animated:(_Bool)arg2;
- (_Bool)showOuterBorder;
- (id)cancelImage;
- (void)playIndicatorDidChange:(_Bool)arg1;

@end
