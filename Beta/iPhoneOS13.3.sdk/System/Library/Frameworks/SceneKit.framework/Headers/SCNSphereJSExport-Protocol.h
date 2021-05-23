/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@protocol SCNSphereJSExport <Swift>

@property (nonatomic) double radius;
@property (nonatomic, getter=isGeodesic) _Bool geodesic;
@property (nonatomic) long long segmentCount;
@property (nonatomic, getter=isHemispheric) _Bool hemispheric;

+ (unsigned short)sphereWithRadius: /* Error: Ran out of types for this method. */;

@end
