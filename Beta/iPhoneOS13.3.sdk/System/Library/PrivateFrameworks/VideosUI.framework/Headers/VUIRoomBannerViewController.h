/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class IKViewElement, NSString, VUIRoomBannerView;

__attribute__((visibility("hidden")))
@interface VUIRoomBannerViewController : UIViewController

{
    IKViewElement *_viewElement;
    VUIRoomBannerView *_bannerView;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIRoomBannerView *bannerView;
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
- (void)setWhiteBannerOpacity:(double)arg1;

@end
