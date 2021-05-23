/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class CLHeading, CLLocation, NSString;

@protocol MKAnnotationPrivate;

__attribute__((visibility("hidden")))
@interface MKUserLocationInternal : NSObject

{
    CLLocation *fixedLocation;
    CLLocation *predictedLocation;
    CLHeading *heading;
    NSString *title;
    NSString *subtitle;
    id <MKAnnotationPrivate> _annotation;
    double timestamp;
    _Bool updating;
    double course;
    id <MKAnnotationPrivate> annotation;
}

@property (retain, nonatomic) CLLocation *fixedLocation;
@property (retain, nonatomic) CLLocation *predictedLocation;
@property (retain, nonatomic) CLHeading *heading;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic, readonly) id <MKAnnotationPrivate> annotation;
@property (nonatomic) double timestamp;
@property (nonatomic, getter=isUpdating) _Bool updating;
@property (nonatomic) double course;

@end
