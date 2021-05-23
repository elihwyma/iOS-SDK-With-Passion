/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UILabel, UILayoutGuide, UIStackView, _TVCarouselView;

__attribute__((visibility("hidden")))
@interface VUIAccessView_tvOS : UIView

{
    NSArray *_apps;
    UILayoutGuide *_contentGuide;
    UIStackView *_contentStack;
    UILabel *_titleLabel;
    UIStackView *_logoStack;
    UILabel *_bodyLabel;
    UIStackView *_seeAllButtonStack;
    UIStackView *_buttonStack;
    UIButton *_allowButton;
    UIButton *_disallowButton;
    UIButton *_nackButton;
    UIButton *_seeAllButton;
    _TVCarouselView *_carouselView;
    _Bool _didLayout;
    UIView *_privacyView;
}

@property (retain, nonatomic) UIView *privacyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)iconSize;

- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setBody:(id)arg1;
- (id)allowButton;
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;
- (id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (id)_buttonWithTitleForTV:(id)arg1 textStyle:(id)arg2;
- (id)_buildCarousel;
- (id)_buildLogoStack;
- (id)_imageViewForIndex:(unsigned long long)arg1;
- (id)initWithApps:(id)arg1;
- (id)disallowButton;
- (id)seeAllButton;
- (id)nackButton;
- (id)bodyScroll;
- (void)showNackScreen;
- (id)_buildButtonStack;
- (id)_buildSeeAllButtonStack;

@end
