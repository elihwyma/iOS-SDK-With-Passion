/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VCPImageDescriptor, VCPVideoKeyFrame;

__attribute__((visibility("hidden")))
@interface VCPMovieHighlight : NSObject

{
    _Bool _isAutoPlayable;
    _Bool _isTrimmed;
    float _score;
    float _junkScore;
    float _qualityScore;
    float _expressionScore;
    float _actionScore;
    float _voiceScore;
    float _humanActionScore;
    float _humanPoseScore;
    VCPImageDescriptor *_descriptor;
    VCPVideoKeyFrame *_keyFrame;
    struct CGRect _bestPlaybackCrop;
    CDStruct_e83c9415 _timerange;
}

@property (nonatomic) CDStruct_e83c9415 timerange;
@property (nonatomic) float score;
@property (nonatomic) float junkScore;
@property (nonatomic) float qualityScore;
@property (nonatomic) float expressionScore;
@property (nonatomic) float actionScore;
@property (nonatomic) float voiceScore;
@property (nonatomic) float humanActionScore;
@property (nonatomic) float humanPoseScore;
@property (nonatomic) struct CGRect bestPlaybackCrop;
@property (nonatomic) _Bool isAutoPlayable;
@property (nonatomic) _Bool isTrimmed;
@property (retain, nonatomic) VCPImageDescriptor *descriptor;
@property (retain, nonatomic) VCPVideoKeyFrame *keyFrame;

- (id)initWithTimeRange:(CDStruct_e83c9415)arg1;
- (void)mergeSegment:(id)arg1;
- (_Bool)isShort;
- (void)copyScoresFrom:(id)arg1;
- (void)checkAutoPlayable;

@end
