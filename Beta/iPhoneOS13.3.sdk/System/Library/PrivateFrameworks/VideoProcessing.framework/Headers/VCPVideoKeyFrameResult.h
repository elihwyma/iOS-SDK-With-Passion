/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@interface VCPVideoKeyFrameResult : NSObject

{
    float _score;
    CDStruct_1b6d18a9 _timeStamp;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 timeStamp;
@property (nonatomic, readonly) float score;

- (id)initWithTime:(CDStruct_1b6d18a9)arg1 andScore:(float)arg2;

@end
