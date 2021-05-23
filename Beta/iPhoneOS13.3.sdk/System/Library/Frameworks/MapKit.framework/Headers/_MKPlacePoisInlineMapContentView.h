/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKPlaceInlineMapContentView.h>

@class _MKUILabel;

__attribute__((visibility("hidden")))
@interface _MKPlacePoisInlineMapContentView : _MKPlaceInlineMapContentView

{
    _MKUILabel *_storesLabel;
    _MKUILabel *_seeMoreLabel;
    _Bool _visible;
}

@property (nonatomic) _Bool visible;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)hasTitle;
- (double)mapViewHeight;
- (_Bool)useImageView;
- (void)setLocationsNumber:(unsigned long long)arg1;

@end
