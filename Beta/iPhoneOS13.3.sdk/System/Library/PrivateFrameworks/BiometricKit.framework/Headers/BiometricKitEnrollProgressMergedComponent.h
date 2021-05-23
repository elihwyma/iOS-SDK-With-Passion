/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class BiometricKitEnrollProgressCoordinates;

@interface BiometricKitEnrollProgressMergedComponent : NSObject

{
    long long _componentID;
    BiometricKitEnrollProgressCoordinates *_transformationCoordinates;
}

@property (nonatomic) long long componentID;
@property (retain, nonatomic) BiometricKitEnrollProgressCoordinates *transformationCoordinates;

- (id)init;
- (void)dealloc;

@end
