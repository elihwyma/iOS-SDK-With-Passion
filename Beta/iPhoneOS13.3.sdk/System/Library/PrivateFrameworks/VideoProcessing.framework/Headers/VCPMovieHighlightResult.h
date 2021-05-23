/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VCPVideoKeyFrameResult;

@interface VCPMovieHighlightResult : NSObject

{
    float _score;
    VCPVideoKeyFrameResult *_keyFrame;
    CDStruct_e83c9415 _timerange;
}

@property (nonatomic, readonly) CDStruct_e83c9415 timerange;
@property (nonatomic, readonly) float score;
@property (nonatomic, readonly) VCPVideoKeyFrameResult *keyFrame;

- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 score:(float)arg2 andKeyFrame:(id)arg3;

@end
