/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

#import <WebKitLegacy/Swift-Protocol.h>

@class NSString, WebDeviceOrientationProviderMockInternal;

@interface WebDeviceOrientationProviderMock : NSObject <Swift>

{
    WebDeviceOrientationProviderMockInternal *m_internal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)shared;

- (id)init;
- (void)dealloc;
- (void)setOrientation:(id)arg1;
- (void)setController:(struct DeviceOrientationController *)arg1;
- (void)startUpdating;
- (void)stopUpdating;
- (id)lastOrientation;

@end
