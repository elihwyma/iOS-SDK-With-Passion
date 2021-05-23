/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class HKElectrocardiogram;

@protocol HKElectrocardiogramMetadataViewDelegate;

@interface HKElectrocardiogramMetadataView : UIView

{
    HKElectrocardiogram *_sample;
    id <HKElectrocardiogramMetadataViewDelegate> _delegate;
}

@property (retain, nonatomic) HKElectrocardiogram *sample;
@property (weak, nonatomic) id <HKElectrocardiogramMetadataViewDelegate> delegate;

- (id)_footerLabel;
- (id)_separatorLine;
- (void)_setupUI;
- (void)detailButtonTapped:(id)arg1;
- (id)initWithSample:(id)arg1 delegate:(id)arg2;
- (id)_ecgChart;
- (id)_bulletedTextView;
- (id)_sharePDFControl;
- (void)sharedPDFControlTapped:(id)arg1;

@end
