/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessoryCategory, HMAccessorySettings, HMApplicationData, HMFUnfairLock, HMHome, HMMediaSession, HMMutableArray, HMSymptomsHandler, NSArray, NSString, NSUUID, _HMContext;

@protocol HMMediaSystemDelegate, OS_dispatch_queue;

@interface HMMediaSystem : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    _Bool _compatible;
    NSString *_name;
    NSString *_configuredName;
    NSUUID *_uniqueIdentifier;
    HMAccessorySettings *_settings;
    id <HMMediaSystemDelegate> _delegate;
    HMApplicationData *_applicationData;
    HMHome *_home;
    HMSymptomsHandler *_symptomsHandler;
    _HMContext *_context;
    NSUUID *_uuid;
    HMMutableArray *_componentsArray;
}

@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic) HMHome *home;
@property (nonatomic, readonly) NSUUID *uuid;
@property (retain, nonatomic) HMMutableArray *componentsArray;
@property (retain, nonatomic) HMApplicationData *applicationData;
@property (weak) id <HMMediaSystemDelegate> delegate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *configuredName;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, getter=isCompatible) _Bool compatible;
@property (nonatomic, readonly) NSArray *components;
@property (nonatomic, readonly) HMAccessoryCategory *category;
@property (nonatomic, readonly) HMSymptomsHandler *symptomsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, getter=isControllable) _Bool controllable;
@property (copy, readonly) HMMediaSession *mediaSession;
@property (readonly) HMAccessorySettings *settings;
@property (weak, readonly) HMHome *containerHome;

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)mediaSystemWithDictionary:(id)arg1 home:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)logIdentifier;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (id)initWithHome:(id)arg1 uuid:(id)arg2 name:(id)arg3 configuredName:(id)arg4 compatible:(_Bool)arg5 components:(id)arg6 settings:(id)arg7 symptomHandler:(id)arg8;
- (void)_handleRootSettingsUpdated:(id)arg1;
- (void)_handleSystemUpdatedNotification:(id)arg1;
- (void)_updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)notifyDelegateOfUpdatedSettings:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2 includeSettingsAndAppData:(_Bool)arg3;
- (void)notifyDelegateOfUpdatedComponents:(id)arg1;
- (void)notifyDelegateOfUpdatedName:(id)arg1;
- (void)setConfiguredName:(id)arg1;
- (void)notifyDelegateOfUpdatedConfiguredName:(id)arg1;
- (void)notifyDelegateOfUpdatedApplicationData:(id)arg1;
- (void)notifyDelegateOfUpdatedMediaSession:(id)arg1;
- (void)_updateAccessoryReference;
- (void)updateMediaSession:(id)arg1 forMediaProfile:(id)arg2;

@end
