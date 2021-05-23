/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSManagedObjectID, NSString;

@interface _DPCMSRecord : NSObject

{
    _Bool _submitted;
    double _creationDate;
    NSString *_key;
    long long _reportVersion;
    NSManagedObjectID *_objectId;
}

@property (nonatomic) double creationDate;
@property (nonatomic) _Bool submitted;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long reportVersion;
@property (retain, nonatomic) NSManagedObjectID *objectId;

+ (_Bool)supportsSecureCoding;
+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)entityName;
- (_Bool)copyToManagedObject:(id)arg1;
- (id)jsonString;
- (id)initWithKey:(id)arg1 creationDate:(double)arg2 submitted:(_Bool)arg3 objectId:(id)arg4;
- (_Bool)copyFromManagedObject:(id)arg1;
- (_Bool)isEqualToCMSRecord:(id)arg1;

@end
