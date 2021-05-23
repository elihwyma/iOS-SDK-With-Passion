/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface SKUIPageDividerCollectionViewCell : UICollectionViewCell

{
    struct UIEdgeInsets _contentInset;
    UIView *_topDividerLine;
    UIView *_bottomDividerLine;
    double _dividerHeight;
    long long _dividerType;
    UIView *_insetView;
    UIColor *_insetColor;
    double _leftEdgeInset;
    double _rightEdgeInset;
    long long _verticalAlignment;
}

@property (nonatomic) long long dividerType;
@property (nonatomic) double dividerHeight;
@property (nonatomic) double leftEdgeInset;
@property (nonatomic) double rightEdgeInset;
@property (nonatomic) long long verticalAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setInsetColor:(id)arg1;
- (void)setColoringWithStyle:(id)arg1;

@end
