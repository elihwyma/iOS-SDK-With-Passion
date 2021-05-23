/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HULocationTriggerEditorCircle : NSObject

{
    double _radius;
    struct CLLocationCoordinate2D _coordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (nonatomic) double radius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) CDStruct_02837cd9 boundingMapRect;

+ (id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;

- (CDStruct_02837cd9)circleRect;

@end
