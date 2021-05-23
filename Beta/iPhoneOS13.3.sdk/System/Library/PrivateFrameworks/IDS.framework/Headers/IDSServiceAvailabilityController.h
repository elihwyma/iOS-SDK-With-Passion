/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject

{
    NSMutableDictionary *_availabilityHandlers;
}

- (id)init;
- (void)dealloc;
- (_Bool)addListenerID:(id)arg1 forService:(id)arg2;
- (long long)availabilityForListenerID:(id)arg1 forService:(id)arg2;
- (void)_postNotificationForService:(id)arg1 availability:(long long)arg2;
- (void)_handleServiceMonitorNotification:(id)arg1;
- (_Bool)_isValidServiceType:(id)arg1;
- (void)_startListeningToMonitor:(id)arg1;
- (id)containerForService:(id)arg1 create:(_Bool)arg2;
- (void)_stopListeningToMonitor:(id)arg1;
- (_Bool)hasListenerID:(id)arg1 forService:(id)arg2;
- (_Bool)removeListenerID:(id)arg1 forService:(id)arg2;

@end
