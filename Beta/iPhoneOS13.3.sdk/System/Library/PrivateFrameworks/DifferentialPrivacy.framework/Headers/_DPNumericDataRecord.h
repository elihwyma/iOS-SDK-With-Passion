/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSManagedObjectID, NSString;

@interface _DPNumericDataRecord : NSObject

{
    _Bool _submitted;
    NSString *_key;
    double _clearNumber;
    double _privateNumber;
    double _creationDate;
    long long _reportVersion;
    NSManagedObjectID *_objectId;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) double clearNumber;
@property (nonatomic) double privateNumber;
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
- (id)initWithKey:(id)arg1 clearNumber:(double)arg2 privateNumber:(double)arg3 creationDate:(double)arg4 submitted:(_Bool)arg5 objectId:(id)arg6;
- (_Bool)isEqualToNumericDataRecord:(id)arg1;

@end
