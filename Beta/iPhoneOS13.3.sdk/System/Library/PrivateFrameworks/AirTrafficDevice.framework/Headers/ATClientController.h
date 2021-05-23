/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class NSDictionary;

@interface ATClientController : NSObject

{
    NSDictionary *_clientMap;
    struct __CFDictionary *_queueMap;
}

+ (id)sharedInstance;
+ (id)controllerForDataclasses:(id)arg1;

- (void)dealloc;
- (id)allClients;
- (id)clientForDataclass:(id)arg1;
- (id)queueForClient:(id)arg1;
- (_Bool)_loadClientsForDataclasses:(id)arg1;
- (void)resetQueues;
- (void)waitToDrain;

@end
