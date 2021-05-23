/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSString;

@interface ARMattingImageMetaData : NSObject <Swift>

{
    double _timestamp;
    struct __CVBuffer *_downSampledImageBuffer;
    struct __CVBuffer *_mattingScaleImageBuffer;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) struct __CVBuffer *downSampledImageBuffer;
@property (nonatomic, readonly) struct __CVBuffer *mattingScaleImageBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithTimestamp:(double)arg1 downSampledImageBuffer:(struct __CVBuffer *)arg2 mattingScaleImageBuffer:(struct __CVBuffer *)arg3;

@end
