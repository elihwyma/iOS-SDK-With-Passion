/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <JavaScriptCore/JSValue.h>

@interface JSValue (OKJavaScriptValue)

+ (id)valueWithVector4:(struct SCNVector4)arg1 inContext:(id)arg2;
+ (id)valueWithVector3:(struct SCNVector3)arg1 inContext:(id)arg2;
+ (id)valueWithEdgeInsets:(struct OKEdgeInsets)arg1 inContext:(id)arg2;
+ (id)valueWithLocationCoordinate2D:(struct OKLocationCoordinate2D)arg1 inContext:(id)arg2;
+ (id)valueWithCoodinateRegion:(CDStruct_b7cb895d)arg1 inContext:(id)arg2;
+ (id)valueWithOffset:(struct UIOffset)arg1 inContext:(id)arg2;
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1 inContext:(id)arg2;

- (struct SCNVector4)toVector4;
- (struct SCNVector3)toVector3;
- (struct OKEdgeInsets)toEdgeInsets;
- (struct OKLocationCoordinate2D)toLocationCoordinate2D;
- (CDStruct_b7cb895d)toCoordinateRegion;
- (struct UIOffset)toOffset;
- (_Bool)isVector4;
- (_Bool)isVector3;
- (struct CATransform3D)toCATransform3D;

@end
