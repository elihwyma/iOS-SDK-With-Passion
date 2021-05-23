/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWTrackedFace : NSObject

{
    id _trackingID;
    float _trackingDistance;
    struct CGRect _trackingRect;
    id _detectionID;
    struct CGRect _detectionRect;
    float _sizeToDistanceMultiplier;
    float _size;
    float _distance;
}

@property (retain, nonatomic) id trackingID;
@property (nonatomic) float trackingDistance;
@property (nonatomic) struct CGRect trackingRect;
@property (nonatomic, readonly) id detectionID;
@property (nonatomic) struct CGRect detectionRect;
@property (nonatomic, readonly) float size;
@property (nonatomic, readonly) float distance;

- (void)dealloc;
- (id)initWithDetectionID:(id)arg1;

@end
