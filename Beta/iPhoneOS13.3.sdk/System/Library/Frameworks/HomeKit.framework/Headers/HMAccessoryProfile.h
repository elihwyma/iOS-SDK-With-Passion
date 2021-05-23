/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMAccessory, NSArray, NSString, NSUUID, _HMAccessoryProfile;

@interface HMAccessoryProfile : NSObject

{
    _HMAccessoryProfile *_accessoryProfile;
}

@property (nonatomic, readonly) _HMAccessoryProfile *accessoryProfile;
@property (copy, nonatomic, readonly) NSUUID *profileUniqueIdentifier;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSArray *services;
@property (weak, nonatomic, readonly) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (id)initWithAccessoryProfile:(id)arg1;

@end
