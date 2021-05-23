/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSManagedObjectID, NSString;

@interface _DPPCCRecord : NSObject

{
    _Bool _submitted;
    NSString *_key;
    NSString *_value;
    double _creationDate;
    long long _reportVersion;
    NSManagedObjectID *_objectId;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) double creationDate;
@property (nonatomic) _Bool submitted;
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
- (_Bool)copyFromManagedObject:(id)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2 creationDate:(double)arg3 submitted:(_Bool)arg4 objectId:(id)arg5;
- (_Bool)isEqualToPCCRecord:(id)arg1;

@end
