/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, SKUIClientContext, SKUIColorScheme, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPageFeaturesView : UIView

{
    UIView *_bottomBorderView;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    long long _features;
    NSMutableArray *_featureViews;
    unsigned long long _gameCenterFeatures;
    UILabel *_titleLabel;
    UIView *_topBorderView;
}

@property (nonatomic) long long features;
@property (nonatomic) unsigned long long gameCenterFeatures;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (retain, nonatomic) SKUIClientContext *clientContext;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setFeatures:(long long)arg1 gameCenterFeatures:(unsigned long long)arg2;
- (id)_gameCenterStringWithFeatures:(unsigned long long)arg1;

@end
