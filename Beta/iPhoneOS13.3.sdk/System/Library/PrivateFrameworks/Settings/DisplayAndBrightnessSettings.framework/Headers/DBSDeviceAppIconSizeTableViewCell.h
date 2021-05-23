/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <UIKit/UITableViewCell.h>

@class DBSDeviceAppIconSizeOptionView, NSString, UILayoutGuide;

@protocol DBSDeviceAppIconSizeTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface DBSDeviceAppIconSizeTableViewCell : UITableViewCell

{
    id <DBSDeviceAppIconSizeTableViewCellDelegate> _delegate;
    DBSDeviceAppIconSizeOptionView *__moreOptionView;
    DBSDeviceAppIconSizeOptionView *__biggerOptionView;
    UILayoutGuide *__leadingGuide;
    UILayoutGuide *__middleGuide;
    UILayoutGuide *__trailingGuide;
}

@property (retain, nonatomic) DBSDeviceAppIconSizeOptionView *_moreOptionView;
@property (retain, nonatomic) DBSDeviceAppIconSizeOptionView *_biggerOptionView;
@property (retain, nonatomic) UILayoutGuide *_leadingGuide;
@property (retain, nonatomic) UILayoutGuide *_middleGuide;
@property (retain, nonatomic) UILayoutGuide *_trailingGuide;
@property (weak, nonatomic) id <DBSDeviceAppIconSizeTableViewCellDelegate> delegate;
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
- (void)reloadDeviceAppIconSizeState;
- (void)userDidTapOnAppIconSizeOptionView:(id)arg1;

@end
