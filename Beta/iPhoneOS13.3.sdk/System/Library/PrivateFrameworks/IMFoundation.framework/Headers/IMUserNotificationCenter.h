/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IMUserNotificationCenter : NSObject

{
    NSMutableDictionary *_identifierToIMUserNotificationQueueMap;
    NSMutableDictionary *_identifierToListenerQueueMap;
    NSMutableDictionary *_identifierToBlockQueueMap;
    NSMutableDictionary *_identifierToRunLoopSourcesMap;
    NSMutableDictionary *_identifierToCFUserNotificationMap;
}

@property (retain, nonatomic) NSMutableDictionary *identifierToIMUserNotificationQueueMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToListenerQueueMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToBlockQueueMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToRunLoopSourcesMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToCFUserNotificationMap;

+ (id)sharedInstance;

- (void)dealloc;
- (void)removeListener:(id)arg1;
- (id)_dequeueUserNotificationForIdentifier:(id)arg1;
- (id)_dequeueListenerForIdentifier:(id)arg1;
- (CDUnknownBlockType)_dequeueBlockForIdentifier:(id)arg1;
- (id)_frontUserNotificationForIdentifier:(id)arg1;
- (void)_displayNextUserNotificationForIdentifier:(id)arg1;
- (void)addUserNotification:(id)arg1 listener:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_enqueueUserNotification:(id)arg1 forIdentifier:(id)arg2;
- (void)_enqueueListener:(id)arg1 forIdentifier:(id)arg2;
- (void)_enqueueBlock:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;
- (void)_cancelActiveUserNotificationForIdentifier:(id)arg1;
- (id)_frontListenerForIdentifier:(id)arg1;
- (CDUnknownBlockType)_frontBlockForIdentifier:(id)arg1;
- (void)_handleUserNotification:(struct __CFUserNotification *)arg1 responseFlags:(unsigned long long)arg2;
- (void)addUserNotification:(id)arg1 listener:(id)arg2;
- (unsigned long long)countForIdentifier:(id)arg1;
- (void)removeNotificationsForServiceIdentifier:(id)arg1;
- (void)removeAllListeners;

@end
