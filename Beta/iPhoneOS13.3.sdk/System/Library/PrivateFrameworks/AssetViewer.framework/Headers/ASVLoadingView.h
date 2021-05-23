/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <UIKit/UIView.h>

@class NSError, NSLayoutConstraint, UIActivityIndicatorView, UILabel;

@interface ASVLoadingView : UIView

{
    UILabel *_assetLoadingStatusLabel;
    UIActivityIndicatorView *_spinner;
    NSLayoutConstraint *_spinnerLeadingConstraint;
    NSError *_loadingError;
    unsigned long long _spinnerColor;
}

@property (retain, nonatomic) NSError *loadingError;
@property (nonatomic) unsigned long long spinnerColor;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateLoadingText;
- (void)_updateLoadingSpinner;

@end
