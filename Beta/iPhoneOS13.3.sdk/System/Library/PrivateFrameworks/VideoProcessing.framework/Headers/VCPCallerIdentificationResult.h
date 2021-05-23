/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSString, PHFace;

@interface VCPCallerIdentificationResult : NSObject

{
    float _confidence;
    PHFace *_face;
    NSString *_callerIdentifier;
}

@property (nonatomic, readonly) PHFace *face;
@property (nonatomic, readonly) NSString *callerIdentifier;
@property (nonatomic, readonly) float confidence;

- (id)initWithCallerIdentifier:(id)arg1 face:(id)arg2 andConfidence:(float)arg3;

@end
