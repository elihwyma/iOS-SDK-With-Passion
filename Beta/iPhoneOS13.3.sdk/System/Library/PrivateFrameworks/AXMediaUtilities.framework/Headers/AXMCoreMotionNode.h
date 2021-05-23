/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMCoreMotionNode : AXMSourceNode

{
    unsigned long long _samplesPerSecond;
    double _lastSampleTime;
}

@property (nonatomic) double lastSampleTime;
@property (nonatomic) unsigned long long samplesPerSecond;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)nodeInitialize;
- (void)triggerWithCoreMotionManager:(id)arg1 deviceOrientation:(long long)arg2 cacheKey:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;

@end
