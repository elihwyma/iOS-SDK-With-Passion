/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <MobileMailUI/MFHasMoreContentBannerView.h>

@interface _MFPartiallyDownloadedBannerView : MFHasMoreContentBannerView

{
    unsigned long long _remainingBytes;
}

@property unsigned long long remainingBytes;

- (id)initWithFrame:(struct CGRect)arg1 remainingBytes:(unsigned long long)arg2;
- (id)actionStringIsDownloading:(_Bool)arg1;

@end
