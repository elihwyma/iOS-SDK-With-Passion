/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, SKUIImageGridViewReuseView;

__attribute__((visibility("hidden")))
@interface SKUIImageGridView : UIView

{
    long long _columnCount;
    struct UIEdgeInsets _contentInset;
    NSArray *_imageViews;
    SKUIImageGridViewReuseView *_reuseView;
    struct CGSize _size;
}

@property (nonatomic) long long columnCount;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (retain, nonatomic) NSArray *imageViews;
@property (nonatomic) struct CGSize size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
