/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class MiroMetadataRange, NSDate, NSString, PHAsset;

__attribute__((visibility("hidden")))
@interface MiroAssetClusteringVideoSegment : NSObject

{
    float _frameRate;
    PHAsset *_videoAsset;
    double _startTime;
    double _duration;
    MiroMetadataRange *_sourceRange;
    MiroMetadataRange *_trimRange;
}

@property (nonatomic) float frameRate;
@property (retain, nonatomic) PHAsset *videoAsset;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic, readonly) NSDate *creationDate;
@property (retain, nonatomic) MiroMetadataRange *sourceRange;
@property (retain, nonatomic) MiroMetadataRange *trimRange;
@property (nonatomic, readonly) double rangeScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PHAsset *asset;

+ (id)videoSegmentFromAsset:(id)arg1 starting:(double)arg2 duration:(double)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localIdentifier;
- (id)rangeScoreExplanation;

@end
