/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface SUUserRatingView : UIView

{
    float _value;
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
}

+ (id)copyImageForRating:(float)arg1 backgroundColor:(id)arg2 style:(long long)arg3;
+ (double)reflectionHeight;

- (id)init;
- (void)setValue:(float)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;
- (struct CGRect)_foregroundImageClipBounds;
- (id)initWithForeground:(id)arg1 background:(id)arg2;
- (float)heightWithoutReflection;

@end
