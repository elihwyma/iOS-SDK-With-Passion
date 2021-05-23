/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSUUID;

@interface CTXPCServiceSubscriptionContext : NSObject

{
    _Bool _isSimPresent;
    _Bool _isSimGood;
    long long _slotID;
    NSUUID *_uuid;
    NSString *_labelID;
    NSString *_label;
    NSString *_phoneNumber;
    NSNumber *_userDataPreferred;
    NSNumber *_userDefaultVoice;
}

@property (retain, nonatomic) NSString *labelID;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSNumber *userDataPreferred;
@property (retain, nonatomic) NSNumber *userDefaultVoice;
@property (nonatomic) _Bool isSimPresent;
@property (nonatomic) _Bool isSimGood;
@property (nonatomic, readonly) long long slotID;
@property (nonatomic, readonly) NSUUID *uuid;

+ (_Bool)supportsSecureCoding;
+ (id)contextWithSlot:(long long)arg1;
+ (id)contextWithUUID:(id)arg1;
+ (id)contextWithServiceDescriptor:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)context;
- (id)initWithUUID:(id)arg1;
- (id)initWithSlot:(long long)arg1;
- (id)initWithUUID:(id)arg1 andSlot:(long long)arg2;

@end
