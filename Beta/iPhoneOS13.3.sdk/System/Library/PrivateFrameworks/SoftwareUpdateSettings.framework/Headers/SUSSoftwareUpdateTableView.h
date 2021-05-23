/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettings.framework/SoftwareUpdateSettings
 */

#import <UIKit/UITableView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface SUSSoftwareUpdateTableView : UITableView

{
    _Bool _updatesDeferred;
    int _state;
    NSString *_currentVersion;
    UILabel *_checkingStatusLabel;
    UILabel *_subtitleLabel;
    UIActivityIndicatorView *_checkingForUpdateSpinner;
}

@property (retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (retain, nonatomic) UILabel *checkingStatusLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) int state;
@property (retain, nonatomic) NSString *currentVersion;
@property _Bool updatesDeferred;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)preferredContentSizeChanged:(id)arg1;

@end
