/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDDeviceManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_deviceIDs;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *deviceIDs;

+ (id)sharedManager;

- (id)init;
- (id)deviceIdentifierForContext:(id)arg1;
- (id)_serviceForContext:(id)arg1;
- (struct __CFDictionary *)createQueryForDeviceIdentifierInContext:(id)arg1;
- (id)deviceIdentifierForContext:(id)arg1 skipInMemoryCache:(_Bool)arg2 createIfNecessary:(_Bool)arg3;
- (id)_lookupKeyForContext:(id)arg1;
- (id)_savedDeviceIdentifierForContext:(id)arg1;
- (void)_saveDeviceIdentifier:(id)arg1 forContext:(id)arg2;
- (void)_deleteDeviceIdentifierForContext:(id)arg1;

@end
