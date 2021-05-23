/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARImageData, NSArray, NSString;

@interface ARMLImageDownScalingResultData : NSObject <Swift>

{
    double _timestamp;
    long long _rotationOfResultTensor;
    NSArray *_downScalingResults;
    ARImageData *_originalImageData;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long rotationOfResultTensor;
@property (copy, nonatomic, readonly) NSArray *downScalingResults;
@property (nonatomic, readonly) ARImageData *originalImageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithResultDataArray:(id)arg1 timestamp:(double)arg2 rotationOfResultTensor:(long long)arg3 originalImageData:(id)arg4;

@end
