/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultColor : SCRCPhotoEvaluatorResult

{
    double _redLevel;
    double _blueLevel;
    double _greenLevel;
}

@property (nonatomic, readonly) double redLevel;
@property (nonatomic, readonly) double blueLevel;
@property (nonatomic, readonly) double greenLevel;

- (id)humanReadableResult;
- (id)initWithRedLevel:(double)arg1 blueLevel:(double)arg2 greenLevel:(double)arg3;

@end
