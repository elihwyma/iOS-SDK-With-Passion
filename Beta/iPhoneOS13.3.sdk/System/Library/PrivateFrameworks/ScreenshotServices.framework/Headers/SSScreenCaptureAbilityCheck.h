/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SSScreenCaptureAbilityCheck : NSObject

{
    _Bool _isAbleToTakeScreenshots;
    NSString *_reasonForNotBeingAbleToTakeScreenshots;
}

@property (nonatomic) _Bool isAbleToTakeScreenshots;
@property (copy, nonatomic) NSString *reasonForNotBeingAbleToTakeScreenshots;

+ (id)abilityCheck;

@end
