/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@class SCRCPhotoEvaluatorResult;

@interface SCRCPhotoEvaluatorResults : NSObject

{
    SCRCPhotoEvaluatorResult *_blurResult;
    SCRCPhotoEvaluatorResult *_colorResult;
    SCRCPhotoEvaluatorResult *_luminanceResult;
}

@property (nonatomic, readonly) SCRCPhotoEvaluatorResult *blurResult;
@property (nonatomic, readonly) SCRCPhotoEvaluatorResult *colorResult;
@property (nonatomic, readonly) SCRCPhotoEvaluatorResult *luminanceResult;

- (id)initWithBlurResult:(id)arg1 colorResult:(id)arg2 luminanceResult:(id)arg3;

@end
