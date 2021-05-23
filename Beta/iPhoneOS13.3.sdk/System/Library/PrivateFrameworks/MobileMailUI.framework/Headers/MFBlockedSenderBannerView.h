/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <MobileMailUI/MFSuggestionBannerView.h>

@protocol MFBlockedSenderBannerViewDelegate;

@interface MFBlockedSenderBannerView : MFSuggestionBannerView

{
    id <MFBlockedSenderBannerViewDelegate> _delegate;
}

@property (weak, nonatomic) id <MFBlockedSenderBannerViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_titleControlTapped:(id)arg1;
- (void)_bannerDismissed:(id)arg1;

@end
