/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class NSDate, NSString, NSUUID;

@interface BKIdentity : NSObject

{
    unsigned int _userID;
    NSUUID *_uuid;
    long long _type;
    NSString *_name;
    NSDate *_creationTime;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned int userID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *creationTime;

+ (id)identity;

- (id)initWithServerIdentity:(id)arg1;
- (id)serverIdentity;

@end
