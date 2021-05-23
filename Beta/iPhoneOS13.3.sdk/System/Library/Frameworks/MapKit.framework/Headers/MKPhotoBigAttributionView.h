/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class MKMapItem, UIImageView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPhotoBigAttributionView : UIView

{
    UIImageView *_imageView;
    _MKUILabel *_firstLineLabel;
    _MKUILabel *_secondLineLabel;
    UIView *_labelsView;
    UIView *_backgroundView;
    long long _type;
    MKMapItem *_mapItem;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) MKMapItem *mapItem;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateBackground;
- (void)updateInfoAttributionString;
- (void)setMapItem:(id)arg1 andType:(long long)arg2;

@end
