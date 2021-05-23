/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSArray, NSString;

@interface ARPersonDetectionData : NSObject <Swift>

{
    double _timestamp;
    NSArray *_detectedObjects;
}

@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSArray *detectedObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)transformToCVPixelBuffer:(struct __CVBuffer *)arg1 depthBuffer:(struct __CVBuffer *)arg2;

@end
