/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSArray;

@interface _EARAcousticFeature : NSObject

{
    NSArray *_acousticFeatureValuePerFrame;
    double _frameDuration;
}

@property (copy, nonatomic, readonly) NSArray *acousticFeatureValuePerFrame;
@property (nonatomic, readonly) double frameDuration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAcousticFeatureValues:(id)arg1 frameDuration:(float)arg2;

@end
