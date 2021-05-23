/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UITableViewCell.h>

@interface MKTableViewCell : UITableViewCell

{
    _Bool __mapkit_separatorStyleOverrideEnabled;
    _Bool __mapkit_forceSeparatorFrameToCGRectZero;
    long long __mapkit_separatorStyleOverride;
}

@property (nonatomic) _Bool _mapkit_forceSeparatorFrameToCGRectZero;
@property (nonatomic) long long _mapkit_separatorStyleOverride;

- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (struct CGRect)_separatorFrame;
- (void)_mapkit_disableSeparatorStyleOverride;

@end
