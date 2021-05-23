/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class APSConnection, NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface VCCKNotificationCenter : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observerTable;
    APSConnection *_connection;
    NSString *_topic;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSHashTable *observerTable;
@property (nonatomic, readonly) APSConnection *connection;
@property (copy, nonatomic, readonly) NSString *topic;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)notificationCenterForContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (id)initWithEnvironment:(id)arg1;

@end
