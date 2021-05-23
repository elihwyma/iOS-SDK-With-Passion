/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARConfiguration.h>

@interface AROrientationTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isAutoFocusEnabled) _Bool autoFocusEnabled;

+ (id)new;
+ (_Bool)supportsFrameSemantics:(unsigned long long)arg1;
+ (id)supportedVideoFormats;

- (id)init;
- (id)description;

@end
