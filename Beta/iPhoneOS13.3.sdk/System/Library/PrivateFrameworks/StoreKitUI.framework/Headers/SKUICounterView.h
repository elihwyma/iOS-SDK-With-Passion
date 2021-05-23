/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSNumberFormatter, NSObject, NSString, SKUICounterTimeView, SKUICounterViewElement, SKUIImageView, UILabel;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKUICounterView : SKUIViewReuseView

{
    struct UIEdgeInsets _contentInset;
    SKUICounterViewElement *_counterElement;
    SKUIImageView *_imageView;
    NSNumberFormatter *_numberFormatter;
    UILabel *_numberView;
    SKUICounterTimeView *_timeView;
    NSObject<OS_dispatch_source> *_updateTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_stopUpdateTimer;
- (void)_addNumberViewWithViewElement:(id)arg1 context:(id)arg2;
- (void)_addTimeViewWithViewElement:(id)arg1 context:(id)arg2;
- (void)_reloadUpdateTimer;
- (void)_reloadNumberValue;
- (unsigned long long)_visibleTimeFieldsForDateFormat:(long long)arg1;
- (void)_startUpdateTimer;
- (void)_updateTimerAction;

@end
