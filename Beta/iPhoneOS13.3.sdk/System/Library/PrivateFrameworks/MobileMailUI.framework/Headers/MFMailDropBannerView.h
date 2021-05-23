/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

@class EMMailDropMetadata, MFProgressView, NSLayoutConstraint, UIButton, UILabel;

@protocol MFMailDropBannerDelegate;

@interface MFMailDropBannerView

{
    _Bool _hasLoaded;
    UILabel *_expirationLabel;
    UILabel *_downloadLabel;
    UIButton *_downloadIcon;
    MFProgressView *_progressView;
    NSLayoutConstraint *_iconWrapperWidth;
    NSLayoutConstraint *_labelFirstBaseline;
    NSLayoutConstraint *_expirationFirstBaseline;
    NSLayoutConstraint *_expirationBottom;
    EMMailDropMetadata *_metaData;
    unsigned long long _bannerState;
    double _downloadProgress;
    id <MFMailDropBannerDelegate> _delegate;
}

@property (retain, nonatomic) EMMailDropMetadata *metaData;
@property (nonatomic) unsigned long long bannerState;
@property (nonatomic) double downloadProgress;
@property (weak, nonatomic) id <MFMailDropBannerDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)startDownload:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_setupDownloadLabel;
- (void)_setupExpirationLabel;
- (void)_setupDownloadIcon;
- (_Bool)_hasDataLocally;
- (_Bool)_shouldDisplayProgress;
- (void)setSeparatorIsHidden:(_Bool)arg1;
- (_Bool)shouldPresent;

@end
