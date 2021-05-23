/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultBlur : SCRCPhotoEvaluatorResult

{
    double _blurLevel;
}

@property (nonatomic, readonly) double blurLevel;

- (id)humanReadableResult;
- (id)initWithBlurLevel:(double)arg1;

@end
