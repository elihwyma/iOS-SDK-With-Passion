/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView;

@interface MPVideoBackgroundView : UIView

{
    long long _interfaceOrientation;
    UIView *_imageView;
    UIImageView *_iconView;
    UIImageView *_backgroundPlaceholderImageView;
    UIView *_backgroundPlaceholderPosterImageView;
    UIView *_backgroundPlaceholderView;
    UIImageView *_customBackgroundImageView;
    NSString *_destinationName;
    long long _destinationPlaceholderStyle;
    _Bool _showDestinationPlaceholder;
    CDUnknownBlockType _layoutSubviewsPostflightHandler;
}

@property (nonatomic) long long interfaceOrientation;
@property (retain, nonatomic) UIImage *backgroundPlaceholderImage;
@property (nonatomic, readonly) UIView *backgroundPlaceholderView;
@property (retain, nonatomic) UIView *backgroundPlaceholderPosterImageView;
@property (nonatomic) long long destinationPlaceholderStyle;
@property (copy, nonatomic) NSString *destinationName;
@property (copy, nonatomic) CDUnknownBlockType layoutSubviewsPostflightHandler;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)qtIcon;
- (void)setShowQTAudioOnlyUI:(_Bool)arg1;
- (void)_createInformationalTitleView:(id *)arg1 systemFont:(id)arg2 lineBreakMode:(long long)arg3;
- (void)setCustomBackgroundImage:(id)arg1;
- (void)setShowDestinationPlaceholder:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)_updateDestinationBackgroundViewAnimated:(_Bool)arg1;

@end
