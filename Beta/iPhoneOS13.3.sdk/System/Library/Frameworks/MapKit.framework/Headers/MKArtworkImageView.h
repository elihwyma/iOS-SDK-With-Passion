/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIImageView.h>

@class UIColor;

@protocol MKArtworkImageSource;

@interface MKArtworkImageView : UIImageView

{
    UIImageView *_cachedBadgeView;
    id <MKArtworkImageSource> _imageSource;
    UIColor *_primaryTintColor;
    UIColor *_secondaryTintColor;
}

@property (nonatomic, readonly) UIImageView *badgeView;
@property (retain, nonatomic) id <MKArtworkImageSource> imageSource;
@property (retain, nonatomic) UIColor *primaryTintColor;
@property (retain, nonatomic) UIColor *secondaryTintColor;

- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateImageView;

@end
