/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <MobileMailUI/MFSuggestionBannerView.h>

@protocol MFLoadBlockedContentBannerViewDelegate;

@interface MFLoadBlockedContentBannerView : MFSuggestionBannerView

{
    long long _blockingReason;
    id <MFLoadBlockedContentBannerViewDelegate> _delegate;
    unsigned long long _blockedContentTypes;
}

@property (weak, nonatomic) id <MFLoadBlockedContentBannerViewDelegate> delegate;
@property (nonatomic) unsigned long long blockedContentTypes;

- (void)_titleControlTapped:(id)arg1;
- (void)_updateBannerText;
- (id)initWithFrame:(struct CGRect)arg1 blockedContentTypes:(unsigned long long)arg2 blockingReason:(long long)arg3;

@end
