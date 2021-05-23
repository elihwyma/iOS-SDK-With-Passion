/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_source;

@interface SCROBrailleDisplayAutoDetector : NSObject

{
    _Bool _isDetectingDisplays;
    struct IONotificationPort *_notificationPort;
    NSMutableDictionary *_iteratorDict;
    NSObject<OS_dispatch_source> *_serialSource;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)sharedDetector;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_driverBundleIdentifiers;
- (void)_autodetectIOServices:(id)arg1;
- (void)_initializeAutodetectSerialPorts:(id)arg1;
- (_Bool)_serialDataMatchesDriver:(id)arg1 driverBundleIdentifiers:(id)arg2 fileDescriptor:(int)arg3;
- (void)serialPortsWerePublished:(unsigned int)arg1;
- (void)_detectSerialPorts:(id)arg1;
- (id)_serialPortMatchingDictionary;
- (void)_registerForSerialPortNotifications;
- (void)_openSerialPortService:(id)arg1 sortedDriverBundleIdentifiers:(id)arg2;
- (_Bool)isAutoDetectEnabled;
- (void)detectDisplays;
- (void)stopDetectingDisplays;

@end
