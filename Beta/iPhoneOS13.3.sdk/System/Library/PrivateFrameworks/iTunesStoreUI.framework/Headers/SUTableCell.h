/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UITableViewCell.h>

@class SUCellConfiguration, SUItemOfferButton, SUTableCellContentView, UIBezierPath, UIColor;

@interface SUTableCell : UITableViewCell

{
    UIColor *_bottomBorderColor;
    SUTableCellContentView *_configurationView;
    unsigned int _hideHighlight:1;
    SUItemOfferButton *_itemOfferButton;
    CDStruct_3e55db63 _position;
    UIColor *_topBorderColor;
    long long _editState;
}

@property (retain, nonatomic) UIColor *bottomBorderColor;
@property (nonatomic) int clipCorners;
@property (nonatomic, readonly) UIBezierPath *clippingPath;
@property (retain, nonatomic) SUCellConfiguration *configuration;
@property (nonatomic) _Bool drawAsDisabled;
@property (nonatomic) _Bool highlightsOnlyContentView;
@property (retain, nonatomic, readonly) SUItemOfferButton *itemOfferButton;
@property (nonatomic) CDStruct_3e55db63 position;
@property (nonatomic) _Bool showHighlight;
@property (retain, nonatomic) UIColor *topBorderColor;
@property (nonatomic) _Bool usesSubviews;
@property (nonatomic) long long editState;

- (void)dealloc;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_canDrawContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowingDeleteConfirmation:(_Bool)arg1;
- (id)copyPurchaseAnimationView;

@end
