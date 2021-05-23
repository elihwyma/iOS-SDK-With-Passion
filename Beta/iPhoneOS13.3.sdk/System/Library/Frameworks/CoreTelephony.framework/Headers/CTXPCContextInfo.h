/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface CTXPCContextInfo : NSObject

{
    NSUUID *_uuid;
    NSString *_accountID;
    long long _slotID;
    NSString *_labelID;
    NSString *_label;
    NSString *_phoneNumber;
}

@property (retain, nonatomic) NSString *labelID;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *phoneNumber;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) long long slotID;

+ (_Bool)supportsSecureCoding;
+ (id)contextWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)context;
- (id)initWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3;

@end
