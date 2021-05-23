/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class VKMapView;

__attribute__((visibility("hidden")))
@interface _MKMuninLayerHostingView : UIView

{
    VKMapView *_muninView;
}

@property (retain, nonatomic) VKMapView *muninView;

+ (Class)layerClass;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
