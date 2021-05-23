/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class NSDate, NSString, NSUUID;

@interface BiometricKitIdentity : NSObject

{
    unsigned int _userID;
    int _type;
    int _attribute;
    int _entity;
    NSUUID *_uuid;
    NSString *_name;
    NSDate *_creationTime;
    long long _matchCount;
    long long _updateCount;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned int userID;
@property (nonatomic) int type;
@property (nonatomic) int attribute;
@property (nonatomic) int entity;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *creationTime;
@property (nonatomic) long long matchCount;
@property (nonatomic) long long updateCount;

+ (_Bool)supportsSecureCoding;
+ (id)biometricKitIdentity;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
