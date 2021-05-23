/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, VUISBIconProgressView;

__attribute__((visibility("hidden")))
@interface VUIAppInstallView : UIView

{
    UIImageView *_appIconImageView;
    UIView *_backgroundKnockoutView;
    CDUnknownBlockType _completion;
    VUISBIconProgressView *_progressView;
    UIImage *_appIcon;
    double _installProgress;
}

@property (retain, nonatomic) UIImage *appIcon;
@property (nonatomic) double installProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_progressMaskImage;
+ (struct CGSize)_appIconSize;
+ (double)_appIconRadius;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)progressViewCanBeRemoved:(id)arg1;
- (void)finishInstallationWithCompletion:(CDUnknownBlockType)arg1;
- (void)setWaiting;

@end
