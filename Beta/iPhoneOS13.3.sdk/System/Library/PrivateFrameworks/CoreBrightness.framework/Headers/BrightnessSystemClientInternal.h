/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class BrightnessSystemClientExportedObj, NSCondition, NSMutableArray, NSXPCConnection;

@protocol OS_os_log;

@interface BrightnessSystemClientInternal : NSObject

{
    NSXPCConnection *_connection;
    id _remote;
    BrightnessSystemClientExportedObj *exportedObj;
    NSMutableArray *_clientProperties;
    NSCondition *copyPropertyForKeyWaitCondition;
    _Bool copyPropertyForKeyCompleted;
    NSObject<OS_os_log> *_logHandle;
}

- (id)init;
- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (void)addKeyToClientProperties:(id)arg1;
- (void)removeKeyFromClientProperties:(id)arg1;
- (void)stopXpcService;
- (id)copyPropertyForKey:(id)arg1;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1 forProperties:(id)arg2;
- (void)addPropertiesForNotification:(id)arg1;
- (void)removePropertiesFromNotification:(id)arg1;
- (void)addPropertyForNotification:(id)arg1;
- (void)removePropertyFromNotification:(id)arg1;

@end
