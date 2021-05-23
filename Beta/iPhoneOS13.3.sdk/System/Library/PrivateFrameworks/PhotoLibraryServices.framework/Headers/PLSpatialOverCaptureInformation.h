/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLSpatialOverCaptureInformation : NSObject

{
    NSString *_spatialOverCaptureGroupIdentifier;
    NSString *_spatialOverCaptureLivePhotoPairingIdentifier;
}

@property (copy, nonatomic) NSString *spatialOverCaptureGroupIdentifier;
@property (copy, nonatomic) NSString *spatialOverCaptureLivePhotoPairingIdentifier;

@end
