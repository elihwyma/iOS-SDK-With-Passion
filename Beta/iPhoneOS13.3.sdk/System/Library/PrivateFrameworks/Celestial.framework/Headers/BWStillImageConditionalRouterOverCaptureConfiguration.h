/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageConditionalRouterConfiguration.h>

@interface BWStillImageConditionalRouterOverCaptureConfiguration : BWStillImageConditionalRouterConfiguration

@property (nonatomic, readonly) unsigned int narrowFieldOfViewOutputIndex;
@property (nonatomic, readonly) unsigned int wideFieldOfViewOutputIndex;

+ (id)overCaptureConfiguration;

- (id)init;
- (unsigned int)singleCameraOutputIndex;

@end
