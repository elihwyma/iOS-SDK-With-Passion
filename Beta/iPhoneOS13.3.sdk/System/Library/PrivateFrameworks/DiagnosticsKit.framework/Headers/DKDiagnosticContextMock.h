/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DKDiagnosticContextMock : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)getAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setScreenToBrightness:(float)arg1 animate:(_Bool)arg2;
- (void)enableVolumeHUD:(_Bool)arg1;

@end
