/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class SKUIClientContext, UIView;

@interface SKUICellLayout : NSObject

{
    UIView *_cell;
    SKUIClientContext *_clientContext;
    UIView *_contentView;
    _Bool _parentWantsCellNeedsLayout;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic, readonly) UIView *contentView;
@property (weak, nonatomic, readonly) UIView *parentCellView;

- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithParentView:(id)arg1;
- (id)initWithTableViewCell:(id)arg1;
- (void)resetLayout;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;

@end
