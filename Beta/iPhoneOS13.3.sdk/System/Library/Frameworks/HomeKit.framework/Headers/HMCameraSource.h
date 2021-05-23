/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, _HMCameraSource;

@interface HMCameraSource : NSObject

{
    HMFUnfairLock *_lock;
    _HMCameraSource *_source;
}

@property (retain, nonatomic) _HMCameraSource *source;

- (id)aspectRatio;
- (id)initWithSource:(id)arg1;

@end
