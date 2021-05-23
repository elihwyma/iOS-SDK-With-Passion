/*
 Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _CDContextualKeyPath : NSObject

{
    _Bool _isUserCentric;
    _Bool _isEphemeral;
    NSString *_key;
    NSString *_deviceID;
}

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) _Bool isUserCentric;
@property (nonatomic) _Bool isEphemeral;

+ (_Bool)supportsSecureCoding;
+ (id)ephemeralKeyPathWithKey:(id)arg1;
+ (id)keyPathWithKey:(id)arg1;
+ (id)keyPathWithKey:(id)arg1 isUserCentric:(_Bool)arg2;
+ (id)remotekeyPathForKeyPath:(id)arg1 forDevice:(unsigned long long)arg2;
+ (id)remoteKeyPathForKeyPath:(id)arg1 forDeviceID:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 forDeviceID:(id)arg2 isUserCentric:(_Bool)arg3 isEphemeral:(_Bool)arg4;
- (id)initWithKey:(id)arg1 forDevice:(unsigned long long)arg2 isUserCentric:(_Bool)arg3 isEphemeral:(_Bool)arg4;
- (_Bool)isMultiDeviceKeyPath;

@end
