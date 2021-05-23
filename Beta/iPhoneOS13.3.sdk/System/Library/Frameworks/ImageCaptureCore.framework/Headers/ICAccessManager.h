/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSObject.h>

@interface ICAccessManager : NSObject

+ (id)bundleIdentifiersAccessingExternalMediaDevices;
+ (void)revokeBundleIdentifierAccessingExternalMediaDevices:(id)arg1;
+ (void)addBundleIdentifierAccessingExternalMediaDevices:(id)arg1;
+ (_Bool)validateBundleIdentifierAccessingExternalMediaDevices:(id)arg1;

@end
