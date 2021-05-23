/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface MiroMusicMenuCell : UITableViewCell

{
    UIImageView *_artworkView;
    NSString *_detailText;
    NSString *_secondaryDetailText;
    NSLayoutConstraint *_artworkLeadingConstraint;
    UILabel *_upperDetailsLabel;
    UILabel *_lowerDetailsLabel;
}

@property (retain, nonatomic) UILabel *upperDetailsLabel;
@property (retain, nonatomic) UILabel *lowerDetailsLabel;
@property (retain, nonatomic) UIImageView *artworkView;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSString *secondaryDetailText;
@property (retain, nonatomic) NSLayoutConstraint *artworkLeadingConstraint;

- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateFonts;

@end
