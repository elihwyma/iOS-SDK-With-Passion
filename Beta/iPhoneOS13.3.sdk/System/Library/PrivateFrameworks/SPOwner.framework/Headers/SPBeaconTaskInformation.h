/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSDate, NSError, NSString, NSUUID;

@interface SPBeaconTaskInformation : NSObject

{
    NSString *_name;
    NSDate *_lastUpdated;
    NSError *_error;
    long long _state;
    NSUUID *_commandIdentifier;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSUUID *commandIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 lastUpdated:(id)arg2 error:(id)arg3 state:(long long)arg4;

@end
