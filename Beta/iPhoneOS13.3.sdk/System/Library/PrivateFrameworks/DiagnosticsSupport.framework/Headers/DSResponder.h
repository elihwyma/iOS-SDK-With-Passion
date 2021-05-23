/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DSResponder : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setScreenToBrightness:(float)arg1 animate:(_Bool)arg2;
- (void)enableVolumeHUD:(_Bool)arg1;

@end
