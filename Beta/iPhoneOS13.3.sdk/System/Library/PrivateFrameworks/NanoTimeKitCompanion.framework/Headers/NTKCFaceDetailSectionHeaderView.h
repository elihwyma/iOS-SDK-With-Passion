/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, NTKCSeparatorView, UILabel;

@interface NTKCFaceDetailSectionHeaderView : UITableViewHeaderFooterView

{
    UILabel *_detailLabel;
    NTKCSeparatorView *_bottomSeparator;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *groupName;

+ (id)reuseIdentifier;
+ (double)headerHeight;

- (id)init;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_updateLabelFonts;
- (void)_fontSizeDidChange;
- (id)_traitCollectionAdjustedIfNeeded;

@end
