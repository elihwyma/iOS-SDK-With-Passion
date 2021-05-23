/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class IKViewElement, NSString, VUIChannelBannerView;

__attribute__((visibility("hidden")))
@interface VUIChannelBannerViewController : UIViewController

{
    IKViewElement *_viewElement;
    VUIChannelBannerView *_bannerView;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (nonatomic, readonly) VUIChannelBannerView *bannerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isUberLayoutActive;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double topThreshold;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setUberImageOffset:(double)arg1;
- (void)setBannerOpacity:(double)arg1;

@end
