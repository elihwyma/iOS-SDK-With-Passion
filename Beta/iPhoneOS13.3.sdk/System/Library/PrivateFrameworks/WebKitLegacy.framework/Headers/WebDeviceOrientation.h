/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebDeviceOrientationInternal;

@interface WebDeviceOrientation : NSObject

{
    WebDeviceOrientationInternal *m_internal;
}

- (void)dealloc;
- (id)initWithCoreDeviceOrientation:(RefPtr_2fae532e *)arg1;
- (id)initWithCanProvideAlpha:(_Bool)arg1 alpha:(double)arg2 canProvideBeta:(_Bool)arg3 beta:(double)arg4 canProvideGamma:(_Bool)arg5 gamma:(double)arg6;

@end
