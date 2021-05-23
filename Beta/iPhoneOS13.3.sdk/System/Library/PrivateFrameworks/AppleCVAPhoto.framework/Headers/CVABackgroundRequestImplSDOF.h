/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <AppleCVAPhoto/CVABackgroundRequestImplBase.h>

@class NSString;

@interface CVABackgroundRequestImplSDOF : CVABackgroundRequestImplBase

{
    float _simulatedFocalRatio;
    float _sourceColorGain;
    float _sourceColorLux;
}

@property float simulatedFocalRatio;
@property float sourceColorGain;
@property float sourceColorLux;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
