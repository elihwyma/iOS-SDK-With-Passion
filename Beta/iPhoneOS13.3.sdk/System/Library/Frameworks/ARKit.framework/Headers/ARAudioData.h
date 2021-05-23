/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSString;

@interface ARAudioData : NSObject <Swift>

{
    double _timestamp;
    struct opaqueCMSampleBuffer *_sampleBuffer;
}

@property (nonatomic) double timestamp;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer *sampleBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
