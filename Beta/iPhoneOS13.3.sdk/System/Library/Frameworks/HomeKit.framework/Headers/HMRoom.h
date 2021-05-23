/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMApplicationData, HMFUnfairLock, HMHome, NSArray, NSString, NSUUID, _HMContext;

@interface HMRoom : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    NSUUID *_uuid;
    HMHome *_home;
    HMApplicationData *_applicationData;
    _HMContext *_context;
}

@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic) HMHome *home;
@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSArray *accessories;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (copy, readonly) NSUUID *applicationDataIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setName:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setApplicationData:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_unconfigure;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateRoomName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
