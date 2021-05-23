/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class NSString, NSUUID;

@interface DNDRequestDetails : NSObject

{
    NSString *_clientIdentifier;
    NSUUID *_auditUUID;
    unsigned long long _timestamp;
}

@property (copy, nonatomic, readonly) NSString *clientIdentifier;
@property (copy, nonatomic, readonly) NSUUID *auditUUID;
@property (nonatomic, readonly) unsigned long long timestamp;

+ (_Bool)supportsSecureCoding;
+ (id)detailsRepresentingNowWithClientIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1 auditUUID:(id)arg2 timestamp:(unsigned long long)arg3;

@end
