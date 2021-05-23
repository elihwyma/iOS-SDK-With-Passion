/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@interface HMISparseOpticalFlowFeatureVector : HMFObject

{
    long long _eventType;
    struct CGPoint _origin;
    struct CGVector _motion;
}

@property (readonly) struct CGPoint origin;
@property (readonly) struct CGPoint target;
@property (readonly) struct CGVector motion;
@property long long eventType;

- (double)distance;
- (id)initWithOrigin:(struct CGPoint)arg1 motion:(struct CGVector)arg2;

@end
