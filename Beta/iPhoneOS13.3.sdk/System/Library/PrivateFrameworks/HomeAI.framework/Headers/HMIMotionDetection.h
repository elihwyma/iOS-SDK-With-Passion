/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@interface HMIMotionDetection : HMFObject

{
    struct CGRect _boundingBox;
}

@property (readonly) struct CGRect boundingBox;

- (id)initWithBoundingBox:(struct CGRect)arg1;
- (_Bool)applyEventTypeAndCheckIfSubBoundingIsStatic:(struct CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4;

@end
