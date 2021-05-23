/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <UIKit/UITableViewCell.h>

@class BPSCheckMarkView, BPSRemoveMigrationWatchView, UILabel;

@interface BPSMultipleWatchMigrationViewCell : UITableViewCell

{
    BPSRemoveMigrationWatchView *_watchView;
    BPSCheckMarkView *_checkmarkView;
    UILabel *_deviceDetailLabel;
}

@property (retain, nonatomic) BPSRemoveMigrationWatchView *watchView;
@property (retain, nonatomic) BPSCheckMarkView *checkmarkView;
@property (retain, nonatomic) UILabel *deviceDetailLabel;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
