/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class NSString;

@interface DMFAppManagementInformation : NSObject

{
    unsigned long long _state;
    unsigned long long _options;
    NSString *_redemptionCode;
    NSString *_unusedRedemptionCode;
    NSString *_displayName;
}

@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSString *redemptionCode;
@property (copy, nonatomic) NSString *unusedRedemptionCode;

+ (_Bool)supportsSecureCoding;
+ (id)stringForState:(unsigned long long)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_stringForOptions:(unsigned long long)arg1;

@end
