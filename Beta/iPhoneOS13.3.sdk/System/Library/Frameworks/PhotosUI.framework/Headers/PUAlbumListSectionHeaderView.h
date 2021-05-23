/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSString, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface PUAlbumListSectionHeaderView : UICollectionReusableView

{
    NSString *_sectionHeaderTitle;
    UIFont *_sectionHeaderTitleFont;
    UILabel *__titleLabel;
    NSArray *__constraints;
    struct UIEdgeInsets _sectionHeaderInsets;
}

@property (nonatomic, readonly) UILabel *_titleLabel;
@property (retain, nonatomic, setter=_setConstraints:) NSArray *_constraints;
@property (copy, nonatomic) NSString *sectionHeaderTitle;
@property (retain, nonatomic) UIFont *sectionHeaderTitleFont;
@property (nonatomic) struct UIEdgeInsets sectionHeaderInsets;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
