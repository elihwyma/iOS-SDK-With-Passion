/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface LPSettings : NSObject

+ (void)initialize;
+ (_Bool)disableAutoplay;
+ (_Bool)subsampleImagesToScreenSize;
+ (_Bool)showDebugIndicators;
+ (_Bool)disableLegacyStoreLookups;
+ (_Bool)disableAnimations;

@end
