/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, NSTimer, UILabel;

@interface AVTGroupDialCell : UICollectionViewCell

{
    NSString *_string;
    UILabel *_label;
    NSTimer *_shimmerTimer;
}

@property (nonatomic, readonly) UILabel *label;
@property (retain, nonatomic) NSTimer *shimmerTimer;
@property (copy, nonatomic) NSString *string;

+ (id)labelFont;
+ (id)cellIdentifier;
+ (id)boldLabelFont;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)startShimmering;
- (void)stopShimmeringAnimated:(_Bool)arg1;
- (void)setActiveItem:(_Bool)arg1 animated:(_Bool)arg2;
- (void)cancelShimmerTimer;
- (void)shimmerOnceWithCompletion:(CDUnknownBlockType)arg1;

@end
