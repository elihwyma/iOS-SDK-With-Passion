/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSUUID;

@interface HKDeletedObject : NSObject

{
    NSUUID *_UUID;
    NSDictionary *_metadata;
    long long _externalSyncObjectCode;
}

@property (copy) NSDictionary *metadata;
@property (nonatomic) long long externalSyncObjectCode;
@property (readonly) NSUUID *UUID;

+ (_Bool)supportsSecureCoding;
+ (id)_deletedObjectWithUUID:(id)arg1 metadata:(id)arg2;
+ (id)_metadataWithSyncIdentifier:(id)arg1 syncVersion:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

@end
