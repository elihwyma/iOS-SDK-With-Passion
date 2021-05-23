/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKOverlayPathView.h>

@class MKCircle;

@interface MKCircleView : MKOverlayPathView

@property (nonatomic, readonly) MKCircle *circle;

- (id)initWithCircle:(id)arg1;
- (void)createPath;

@end
