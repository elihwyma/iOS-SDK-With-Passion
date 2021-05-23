/*
 Image: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
 */

#import <UIKit/UITableViewCell.h>

@interface GKPeerPickerTableViewCell : UITableViewCell

{
    _Bool _topSeparator;
}

@property (nonatomic) _Bool topSeparator;

+ (void)initialize;
+ (double)separatorHeight;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
