/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <MobileMailUI/MFSuggestionBannerView.h>

@class NSString;

@protocol MFHasMoreContentBannerViewDelegate;

@interface MFHasMoreContentBannerView : MFSuggestionBannerView

{
    id <MFHasMoreContentBannerViewDelegate> _delegate;
}

@property (readonly) NSString *titleString;
@property (weak, nonatomic) id <MFHasMoreContentBannerViewDelegate> delegate;

+ (id)bannerWithFrame:(struct CGRect)arg1 isPlainText:(_Bool)arg2 remainingBytes:(unsigned long long)arg3;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadData;
- (void)_titleControlTapped:(id)arg1;
- (id)actionStringIsDownloading:(_Bool)arg1;
- (void)requestLoad;

@end
