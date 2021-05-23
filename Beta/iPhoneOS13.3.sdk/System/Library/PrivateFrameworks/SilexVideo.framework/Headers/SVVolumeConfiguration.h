/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SVVolumeConfiguration : NSObject

{
    _Bool _muted;
    double _volume;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool muted;
@property (nonatomic, readonly) double volume;

- (id)initWithVolume:(double)arg1 muted:(_Bool)arg2;

@end
