/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, UIVisualEffectView;

@protocol GEOPictureItem;

__attribute__((visibility("hidden")))
@interface MKPictureItemView : UIView

{
    _Bool _didDownloadImage;
    id <GEOPictureItem> _pictureItem;
    UIImageView *_imageView;
    NSString *_providerName;
    UIVisualEffectView *_effectView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    struct CGSize _imageSize;
}

@property (retain, nonatomic) id <GEOPictureItem> pictureItem;
@property (copy, nonatomic) NSString *providerName;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic, readonly) UIVisualEffectView *effectView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) struct CGSize imageSize;
@property (nonatomic) _Bool didDownloadImage;

- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)setupSubviews;
- (void)updateLabelsSettings;
- (void)setTitleLabelProviderName;
- (id)initWithPictureItem:(id)arg1 providerName:(id)arg2;
- (void)fetchImageIfNecessary;
- (void)updateUIForTheme:(id)arg1;

@end
