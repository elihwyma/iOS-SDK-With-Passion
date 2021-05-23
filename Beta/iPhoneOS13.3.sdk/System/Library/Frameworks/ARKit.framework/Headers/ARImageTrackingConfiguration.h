/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARConfiguration.h>

@class NSSet;

@interface ARImageTrackingConfiguration : ARConfiguration

{
    NSSet *_trackingImages;
    long long _maximumNumberOfTrackedImages;
}

@property (nonatomic, getter=isAutoFocusEnabled) _Bool autoFocusEnabled;
@property (copy, nonatomic) NSSet *trackingImages;
@property (nonatomic) long long maximumNumberOfTrackedImages;

+ (id)new;
+ (_Bool)isSupported;
+ (_Bool)supportsFrameSemantics:(unsigned long long)arg1;
+ (id)supportedVideoFormats;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;

@end
