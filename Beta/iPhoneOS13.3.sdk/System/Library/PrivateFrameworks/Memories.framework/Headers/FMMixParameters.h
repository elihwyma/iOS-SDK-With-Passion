/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface FMMixParameters : NSObject

{
    NSMutableArray *_volumeKeyFrames;
}

@property (retain, nonatomic) NSArray *volumeKeyFrames;

- (id)init;
- (id)description;
- (_Bool)appendVolumeKeyframe:(id)arg1;
- (id)lastVolumeKeyFrame;
- (float)volumeValueAtTime:(long long)arg1;
- (void)insertVolumeKeyframe:(id)arg1;
- (_Bool)volumeKeyframesAreValid;
- (_Bool)removeRedundantVolumeKeyFrames;

@end
