/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface CTXPCSimLessContextInfo : NSObject

{
    NSUUID *_uuid;
    NSString *_accountID;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSString *accountID;

+ (_Bool)supportsSecureCoding;
+ (id)contextWithUUID:(id)arg1 andAccountID:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)context;
- (id)initWithUUID:(id)arg1 andAccountID:(id)arg2;

@end
