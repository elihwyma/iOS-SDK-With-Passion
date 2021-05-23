/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSString;

@interface ARSegmentationData : NSObject <Swift>

{
    double _timestamp;
    struct __CVBuffer *_segmentationBuffer;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) struct __CVBuffer *segmentationBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithTimestamp:(double)arg1 segmentationBuffer:(struct __CVBuffer *)arg2;

@end
