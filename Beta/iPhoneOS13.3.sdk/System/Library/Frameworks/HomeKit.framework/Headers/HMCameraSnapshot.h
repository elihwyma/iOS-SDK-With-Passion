/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMCameraSource.h>

@class NSDate, _HMCameraSnapshot;

@interface HMCameraSnapshot : HMCameraSource

{
    _HMCameraSnapshot *_snapshot;
}

@property (retain, nonatomic) _HMCameraSnapshot *snapshot;
@property (copy, nonatomic, readonly) NSDate *captureDate;

- (id)initWithSnapshot:(id)arg1;

@end
