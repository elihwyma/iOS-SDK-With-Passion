/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/_UICollectionViewListCell.h>

@class CSSearchableItem, UILabel, UILayoutGuide;

@interface SUIKSearchResultCollectionViewListCell : _UICollectionViewListCell

{
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UILayoutGuide *_simulatedImageViewLayoutGuide;
    CSSearchableItem *_searchableItem;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *detailTextLabel;
@property (retain, nonatomic) UILayoutGuide *simulatedImageViewLayoutGuide;
@property (retain, nonatomic) CSSearchableItem *searchableItem;

+ (id)reuseIdentifier;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)configureWithSearchableItem:(id)arg1;

@end
