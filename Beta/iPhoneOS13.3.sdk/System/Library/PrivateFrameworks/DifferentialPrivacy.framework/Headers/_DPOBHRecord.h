/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSManagedObjectID, NSString;

@interface _DPOBHRecord : NSObject

{
    _Bool _submitted;
    NSString *_key;
    double _creationDate;
    long long _reportVersion;
    NSManagedObjectID *_objectId;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) double creationDate;
@property (nonatomic) _Bool submitted;
@property (nonatomic) long long reportVersion;
@property (retain, nonatomic) NSManagedObjectID *objectId;

+ (_Bool)supportsSecureCoding;
+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)arg1;

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
- (_Bool)isEqualToOBHRecord:(id)arg1;
- (_Bool)copyFromManagedObject:(id)arg1;

@end
