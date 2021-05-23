/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARPredictedPose;

@interface ARPredictedSample : NSObject

{
    ARPredictedPose *_renderPose;
    ARPredictedPose *_compositeStartPose;
    ARPredictedPose *_compositeEndPose;
    ARPredictedPose *_screenDrawingPose;
}

@property (retain, nonatomic) ARPredictedPose *renderPose;
@property (retain, nonatomic) ARPredictedPose *compositeStartPose;
@property (retain, nonatomic) ARPredictedPose *compositeEndPose;
@property (retain, nonatomic) ARPredictedPose *screenDrawingPose;

- (id)description;

@end
