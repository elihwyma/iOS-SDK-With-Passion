/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARLightEstimate, NSString;

@interface ARLightEstimationData : NSObject <Swift>

{
    ARLightEstimate *_lightEstimate;
}

@property (retain, nonatomic) ARLightEstimate *lightEstimate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)timestamp;

@end
