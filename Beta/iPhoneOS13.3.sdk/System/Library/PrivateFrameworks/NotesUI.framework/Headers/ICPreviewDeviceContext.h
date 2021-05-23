/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface ICPreviewDeviceContext : NSObject

{
    NSArray *_deviceScales;
    NSArray *_scalableDeviceInfo;
    NSArray *_nonScalableDeviceInfo;
}

@property (copy) NSArray *scalableDeviceInfo;
@property (copy) NSArray *nonScalableDeviceInfo;
@property (readonly) NSArray *deviceScales;
@property (readonly) double maxDeviceScale;

+ (id)sharedContext;

- (id)init;
- (void)dealloc;
- (id)deviceInfoScalable:(_Bool)arg1;
- (void)screensChangedNotification:(id)arg1;
- (double)maxSizeOfPreviewDeviceInfoImage;

@end
