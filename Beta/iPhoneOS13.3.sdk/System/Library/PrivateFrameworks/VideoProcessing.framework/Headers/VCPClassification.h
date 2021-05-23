/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCPClassification : NSObject

{
    float _duration;
    float _sumConfidence;
    NSString *_sceneId;
}

@property (retain) NSString *sceneId;
@property float duration;
@property float sumConfidence;

- (id)initWithSceneId:(id)arg1 withDuration:(float)arg2 withConfidence:(float)arg3;

@end
