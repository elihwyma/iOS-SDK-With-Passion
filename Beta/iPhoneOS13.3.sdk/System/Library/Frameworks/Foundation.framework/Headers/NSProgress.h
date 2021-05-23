/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSURL;

@interface NSProgress : NSObject

{
    NSProgress *_parent;
    long long _reserved4;
    id _values;
    CDUnknownBlockType _resumingHandler;
    CDUnknownBlockType _cancellationHandler;
    CDUnknownBlockType _pausingHandler;
    CDUnknownBlockType _prioritizationHandler;
    unsigned long long _flags;
    NSString *_publisherID;
    id _reserved5;
    long long _reserved6;
    long long _reserved7;
    long long _reserved8;
    NSMutableDictionary *_acknowledgementHandlersByLowercaseBundleID;
    NSMutableDictionary *_lastNotificationTimesByKey;
    NSMutableDictionary *_userInfoLastNotificationTimesByKey;
    NSMutableSet *_children;
    id _userInfoProxy;
    NSLock *_lock;
}

@property long long totalUnitCount;
@property long long completedUnitCount;
@property (copy) NSString *localizedDescription;
@property (copy) NSString *localizedAdditionalDescription;
@property (getter=isCancellable) _Bool cancellable;
@property (getter=isPausable) _Bool pausable;
@property (readonly, getter=isCancelled) _Bool cancelled;
@property (readonly, getter=isPaused) _Bool paused;
@property (copy) CDUnknownBlockType cancellationHandler;
@property (copy) CDUnknownBlockType pausingHandler;
@property (copy) CDUnknownBlockType resumingHandler;
@property (readonly, getter=isIndeterminate) _Bool indeterminate;
@property (readonly) double fractionCompleted;
@property (readonly, getter=isFinished) _Bool finished;
@property (copy, readonly) NSDictionary *userInfo;
@property (copy) NSString *kind;
@property (copy) NSNumber *estimatedTimeRemaining;
@property (copy) NSNumber *throughput;
@property (copy) NSString *fileOperationKind;
@property (copy) NSURL *fileURL;
@property (copy) NSNumber *fileTotalCount;
@property (copy) NSNumber *fileCompletedCount;
@property (readonly, getter=isOld) _Bool old;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)_registrarInterface;
+ (id)currentProgress;
+ (id)progressWithTotalUnitCount:(long long)arg1;
+ (id)discreteProgressWithTotalUnitCount:(long long)arg1;
+ (id)progressWithTotalUnitCount:(long long)arg1 parent:(id)arg2 pendingUnitCount:(long long)arg3;
+ (id)_serverConnection;
+ (id)_addSubscriberForFileURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)_addSubscriberForFileURL:(id)arg1 withPublishingHandler:(CDUnknownBlockType)arg2;
+ (id)_publisherInterface;
+ (id)_subscriberInterface;
+ (void)removeSubscriber:(id)arg1;
+ (id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(CDUnknownBlockType)arg2;
+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+ (id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(CDUnknownBlockType)arg2;
+ (id)addSubscriberForFileURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)_removeSubscriber:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_parent;
- (void)cancel;
- (void)pause;
- (void)resume;
- (oneway void)prioritize;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(_Bool)arg2;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)resignCurrent;
- (void)set_adoptChildUserInfo:(_Bool)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)_receiveProgressMessage:(id)arg1 forSequence:(unsigned long long)arg2;
- (unsigned long long)ownedDictionaryCount;
- (id)ownedDictionaryKeyEnumerator;
- (id)ownedDictionaryObjectForKey:(id)arg1;
- (id)_indentedDescription:(unsigned long long)arg1;
- (double)_remoteFractionCompleted;
- (void)_addImplicitChild:(id)arg1;
- (void)_updateChild:(id)arg1 fraction:(struct _NSProgressFractionTuple)arg2 portion:(long long)arg3;
- (void)_setParent:(id)arg1 portion:(long long)arg2;
- (void)_addCompletedUnitCount:(long long)arg1;
- (void)performAsCurrentWithPendingUnitCount:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_notifyRemoteObserversOfValueForKeys:(id)arg1;
- (void)_setValueForKeys:(CDUnknownBlockType)arg1 settingBlock:(CDUnknownBlockType)arg2;
- (void)_updateFractionCompleted:(struct _NSProgressFractionTuple)arg1;
- (void)_notifyRemoteObserversOfUserInfoValueForKey:(id)arg1;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(_Bool)arg3;
- (void)_setAcknowledgementHandler:(CDUnknownBlockType)arg1 forAppBundleIdentifier:(id)arg2;
- (CDUnknownBlockType)acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)publish;
- (void)unpublish;
- (void)setAcknowledgementHandler:(CDUnknownBlockType)arg1 forAppBundleIdentifier:(id)arg2;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1 inBlock:(CDUnknownBlockType)arg2;
- (_Bool)_adoptChildUserInfo;
- (void)_setCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (id)byteTotalCount;
- (void)setByteTotalCount:(id)arg1;
- (id)byteCompletedCount;
- (void)setByteCompletedCount:(id)arg1;
- (void)acknowledgeWithSuccess:(_Bool)arg1;
- (id)_publishingAppBundleIdentifier;
- (void)setPrioritizable:(_Bool)arg1;
- (_Bool)isPrioritizable;
- (void)setPrioritizationHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)prioritizationHandler;
- (void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_initWithValues:(id)arg1;
- (void)_setRemoteUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)_setRemoteValues:(id)arg1 forKeys:(id)arg2;
- (CDUnknownBlockType)_acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)_publish;
- (void)_unpublish;
- (void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)acknowledge;

@end
