/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface SSScreenCapturerScreenshotOptions : NSObject

{
    unsigned int _externalFlashLayerContextID;
    UIImage *_preparedImage;
    unsigned long long _externalFlashLayerRenderID;
}

@property (retain, nonatomic) UIImage *preparedImage;
@property (nonatomic) unsigned long long externalFlashLayerRenderID;
@property (nonatomic) unsigned int externalFlashLayerContextID;

@end
