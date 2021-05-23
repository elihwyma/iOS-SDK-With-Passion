/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebGeolocationPositionInternal;

@interface WebGeolocationPosition : NSObject

{
    WebGeolocationPositionInternal *_internal;
}

- (void)dealloc;
- (id)initWithTimestamp:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4;
- (id)initWithGeolocationPosition:(struct GeolocationPosition *)arg1;

@end
