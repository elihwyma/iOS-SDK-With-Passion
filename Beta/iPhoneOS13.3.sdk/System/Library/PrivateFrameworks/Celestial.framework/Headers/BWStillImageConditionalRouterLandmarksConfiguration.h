/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageConditionalRouterConfiguration.h>

@interface BWStillImageConditionalRouterLandmarksConfiguration : BWStillImageConditionalRouterConfiguration

@property (nonatomic, readonly) unsigned int defaultOutputIndex;
@property (nonatomic, readonly) unsigned int landmarksOutputIndex;

+ (id)landmarksConfiguration;

- (id)init;

@end
