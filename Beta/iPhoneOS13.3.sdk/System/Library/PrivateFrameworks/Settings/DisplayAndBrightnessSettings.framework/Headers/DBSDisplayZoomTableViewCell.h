/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <UIKit/UITableViewCell.h>

@class DBSDisplayZoomOptionView, NSString;

@protocol DBSDisplayZoomTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface DBSDisplayZoomTableViewCell : UITableViewCell

{
    id <DBSDisplayZoomTableViewCellDelegate> _delegate;
    DBSDisplayZoomOptionView *_standardOptionView;
    DBSDisplayZoomOptionView *_zoomedOptionView;
}

@property (retain, nonatomic) DBSDisplayZoomOptionView *standardOptionView;
@property (retain, nonatomic) DBSDisplayZoomOptionView *zoomedOptionView;
@property (weak, nonatomic) id <DBSDisplayZoomTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)cellStyle;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_configureView;
- (void)updateSelectedViewWithOption:(unsigned long long)arg1;
- (void)userDidTapOnDisplayZoomOptionView:(id)arg1;

@end
