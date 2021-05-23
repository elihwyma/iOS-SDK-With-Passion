/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class NSString, PNPDeviceState, UIColor, UILabel;

@interface PNPStackedPillView : UIView

{
    PNPDeviceState *_deviceState;
    UIView *_contentAreaView;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
    NSString *_topLabelString;
    NSString *_bottomLabelString;
    UIColor *_bottomLabelColor;
}

@property (retain, nonatomic) UIColor *bottomLabelColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) PNPDeviceState *deviceState;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)_configureConstraints;
- (id)initWithFrame:(struct CGRect)arg1 topString:(id)arg2 bottomString:(id)arg3;

@end
