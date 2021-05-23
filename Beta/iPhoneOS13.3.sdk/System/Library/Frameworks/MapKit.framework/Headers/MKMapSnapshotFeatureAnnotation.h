/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString, VKCustomFeature;

@interface MKMapSnapshotFeatureAnnotation : NSObject

{
    long long _representation;
    NSString *_title;
    VKCustomFeature *_customFeature;
    CDStruct_2c43369c _coordinate;
}

@property (nonatomic, readonly) long long representation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_c3b9c2ee coordinate;
@property (nonatomic) double course;
@property (nonatomic, readonly) _Bool showsBalloonCallout;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)feature;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 title:(id)arg2 representation:(long long)arg3;
- (void)setShowsBalloonCallout:(_Bool)arg1;

@end
