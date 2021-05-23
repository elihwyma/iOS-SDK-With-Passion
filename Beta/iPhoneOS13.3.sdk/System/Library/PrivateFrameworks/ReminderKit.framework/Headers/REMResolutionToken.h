/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSUUID;

@interface REMResolutionToken : NSObject <Swift>

{
    long long _counter;
    double _modificationTime;
    NSUUID *_replicaID;
}

@property (nonatomic) long long counter;
@property (nonatomic) double modificationTime;
@property (retain, nonatomic) NSUUID *replicaID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)update;
- (id)initWithCounter:(long long)arg1 modificationTime:(double)arg2 replicaID:(id)arg3;
- (id)initWithDefaultValue;

@end
