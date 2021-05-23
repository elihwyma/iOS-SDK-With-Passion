/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class MKAnnotationView;

@interface MKCalloutView : UIView

{
    _Bool _parallaxEnabled;
    MKAnnotationView *_annotationView;
}

@property (weak, nonatomic, readonly) MKAnnotationView *annotationView;
@property (nonatomic, readonly) long long anchorPosition;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;
@property (nonatomic, readonly) _Bool hasPendingVisibility;
@property (nonatomic) _Bool parallaxEnabled;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithAnnotationView:(id)arg1;
- (void)motionEffectDidUpdate:(id)arg1;
- (void)showAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
