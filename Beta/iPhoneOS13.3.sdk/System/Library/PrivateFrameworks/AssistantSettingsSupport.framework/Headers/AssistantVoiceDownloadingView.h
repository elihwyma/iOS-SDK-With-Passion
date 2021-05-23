/*
 Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface AssistantVoiceDownloadingView : UIView

{
    UIActivityIndicatorView *_indicator;
    UILabel *_downloadLabel;
}

@property (retain, nonatomic) UIActivityIndicatorView *indicator;
@property (retain, nonatomic) UILabel *downloadLabel;

- (void)layoutSubviews;
- (void)sizeToFit;
- (id)initWithActivityIndicatorStyle:(long long)arg1;

@end
