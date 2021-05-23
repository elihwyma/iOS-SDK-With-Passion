/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class NSXPCListener;

@interface DEDConfiguration : NSObject

{
    NSXPCListener *_anonymousListener;
}

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (id)identifier;
- (id)platform;
- (unsigned long long)connectionType;
- (id)deviceName;
- (id)machServiceName;
- (id)deviceClass;
- (id)errorDomain;
- (id)deviceModel;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (const char *)loggingSubsystem;
- (id)deviceProductType;
- (id)dedDirectory;
- (id)uniqueDeviceSpecifier;
- (id)classClusterAPIVersion;
- (id)sharedAnonymousListener;
- (void)invalidateTestListeners;

@end
