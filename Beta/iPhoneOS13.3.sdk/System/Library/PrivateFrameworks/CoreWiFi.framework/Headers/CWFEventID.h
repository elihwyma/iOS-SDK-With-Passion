/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CWFEventID : NSObject

{
    long long _type;
    NSString *_interfaceName;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *interfaceName;

+ (_Bool)supportsSecureCoding;
+ (id)eventIDWithType:(long long)arg1 interfaceName:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToEventID:(id)arg1;

@end
