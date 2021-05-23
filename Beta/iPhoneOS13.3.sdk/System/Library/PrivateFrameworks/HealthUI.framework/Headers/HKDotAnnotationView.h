/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <MapKit/MKAnnotationView.h>

@class UIColor;

@interface HKDotAnnotationView : MKAnnotationView

{
    UIColor *_dotColor;
}

@property (retain, nonatomic) UIColor *dotColor;

- (void)drawRect:(struct CGRect)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end
