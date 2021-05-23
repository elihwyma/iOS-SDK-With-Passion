/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, HMHome, HMMediaSystem, HMMutableArray, NSArray, NSString, NSUUID, _HMContext;

@interface HMMediaSystemBuilder : NSObject

{
    HMFUnfairLock *_lock;
    NSArray *_components;
    NSString *_name;
    NSString *_configuredName;
    _HMContext *_context;
    NSUUID *_uuid;
    NSUUID *_mediaSystemUUID;
    NSString *_builderSessionID;
    HMHome *_home;
    HMMediaSystem *_mediaSystem;
    HMMutableArray *_componentsArray;
}

@property (retain, nonatomic) _HMContext *context;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSUUID *mediaSystemUUID;
@property (retain, nonatomic) NSString *builderSessionID;
@property (weak, nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMMediaSystem *mediaSystem;
@property (retain, nonatomic) HMMutableArray *componentsArray;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSArray *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;
+ (_Bool)supportsMediaSystem:(id)arg1;
+ (_Bool)canSupportMediaSystem:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithHome:(id)arg1;
- (void)commitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_initializeContext;
- (void)_commitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_callCompletion:(CDUnknownBlockType)arg1 builderSessionID:(id)arg2 error:(id)arg3 response:(id)arg4;
- (id)initWithMediaSystem:(id)arg1;

@end
