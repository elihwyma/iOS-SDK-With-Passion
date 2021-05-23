/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessory, NSString, NSUUID;

@interface HMAccessoryInvitation : NSObject <Swift>

{
    NSUUID *_identifier;
    HMAccessory *_accessory;
    long long _state;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) HMAccessory *accessory;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)initWithAccessory:(id)arg1 identifier:(id)arg2 state:(long long)arg3;

@end
