/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UIStackView.h>

@class NSString, UIImageView, UILabel, _UIBatteryView;

@interface WFHotspotDetailsView : UIStackView

{
    unsigned long long _batteryCharge;
    NSString *_cellularProtocolString;
    unsigned long long _signalBars;
    _UIBatteryView *_batteryView;
    UIImageView *_signalImageView;
    UILabel *_networkTypeLabel;
}

@property (retain, nonatomic) _UIBatteryView *batteryView;
@property (retain, nonatomic) UIImageView *signalImageView;
@property (retain, nonatomic) UILabel *networkTypeLabel;
@property (nonatomic) unsigned long long batteryCharge;
@property (copy, nonatomic) NSString *cellularProtocolString;
@property (nonatomic) unsigned long long signalBars;

- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupSubviews;
- (void)updateSignalBars;
- (void)updateCellularProtocolLabel;
- (id)attributedStringFromCellularProtocol:(id)arg1;

@end
