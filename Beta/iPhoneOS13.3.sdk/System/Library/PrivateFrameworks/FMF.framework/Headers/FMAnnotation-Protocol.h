/*
 Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

#import <FMF/Swift-Protocol.h>

@class FMAccuracyOverlay, NSString, UIColor, UIImage;

@protocol FMAnnotation <Swift>

@property (retain, nonatomic) FMAccuracyOverlay *overlay;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (nonatomic) double distanceFromUser;
@property (nonatomic) _Bool isBorderEnabled;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIImage *largeAnnotationIcon;
@property (retain, nonatomic) UIImage *smallAnnotationIcon;
@property (retain, nonatomic) UIImage *largeOverlayIcon;
@property (retain, nonatomic) UIImage *smallOverlayIcon;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;

- (unsigned short)hasKnownLocation;
- (unsigned short)isThisDevice;

@end
