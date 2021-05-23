/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARPointCloud, NSString;

@interface ARWorldTrackingFeaturePointData : NSObject <Swift>

{
    double _timestamp;
    ARPointCloud *_visionFeaturePoints;
    ARPointCloud *_featurePoints;
}

@property (nonatomic, readonly) double timestamp;
@property (retain, nonatomic) ARPointCloud *visionFeaturePoints;
@property (retain, nonatomic) ARPointCloud *featurePoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1;

@end
