/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, PIReframeSubject;

@interface PISubjectCluster : NSObject

{
    _Bool _salientObject;
    float _saliencyScale;
    PIReframeSubject *_body;
    unsigned long long _direction;
    NSMutableSet *_mutablePoints;
    struct CGPoint _centerPoint;
}

@property (copy, nonatomic, readonly) NSMutableSet *mutablePoints;
@property (nonatomic, readonly) float saliencyScale;
@property (nonatomic, readonly, getter=isSalientObject) _Bool salientObject;
@property (nonatomic, readonly) PIReframeSubject *body;
@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic, readonly) struct CGPoint centerPoint;
@property (nonatomic, readonly) struct CGRect boundingBox;
@property (copy, nonatomic, readonly) NSSet *points;
@property (nonatomic, readonly) PIReframeSubject *expandedSubject;

+ (id)subjectForExpansionWithSaliencyScale:(float)arg1 startingSubject:(id)arg2;
+ (unsigned long long)directionForBody:(id)arg1 face:(id)arg2;

- (id)description;
- (void)addPoint:(id)arg1;
- (id)initWithBody:(id)arg1 face:(id)arg2 saliencyScale:(float)arg3;
- (id)initSalientClusterWithCenterPoint:(struct CGPoint)arg1 saliencyScale:(float)arg2;
- (id)initWithBody:(id)arg1 direction:(unsigned long long)arg2 saliencyScale:(float)arg3;
- (_Bool)shouldAllowPoint:(struct CGPoint)arg1;
- (void)addPointsFromCluster:(id)arg1;

@end
