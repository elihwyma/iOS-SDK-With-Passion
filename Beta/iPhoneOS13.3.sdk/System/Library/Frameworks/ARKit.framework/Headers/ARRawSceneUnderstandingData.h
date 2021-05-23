/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSString;

@interface ARRawSceneUnderstandingData : NSObject <Swift>

{
    double _timestamp;
    struct CV3DSceneUnderstandingResult *_resultRef;
}

@property (nonatomic, readonly) struct CV3DSceneUnderstandingResult *resultRef;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) void *sceneUnderstandingResultRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithTimestamp:(double)arg1 resultRef:(struct CV3DSceneUnderstandingResult *)arg2;

@end
