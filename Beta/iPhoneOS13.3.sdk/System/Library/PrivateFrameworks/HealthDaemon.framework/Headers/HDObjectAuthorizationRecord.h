/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSUUID;

@interface HDObjectAuthorizationRecord : NSObject <Swift>

{
    NSUUID *_objectID;
    NSUUID *_sourceID;
    long long _status;
    double _modificationDate;
}

@property (copy, nonatomic) NSUUID *objectID;
@property (copy, nonatomic) NSUUID *sourceID;
@property (nonatomic) long long status;
@property (nonatomic) double modificationDate;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
