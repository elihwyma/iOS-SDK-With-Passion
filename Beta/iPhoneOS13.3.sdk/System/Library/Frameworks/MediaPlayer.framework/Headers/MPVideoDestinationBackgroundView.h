/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface MPVideoDestinationBackgroundView : UIView

{
    NSString *_destinationName;
    UILabel *_destinationSubtitleLabel;
    UILabel *_destinationTitleLabel;
    long long _style;
    UIImageView *_videosImageView;
}

@property (copy, nonatomic) NSString *destinationName;
@property (nonatomic) long long style;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
