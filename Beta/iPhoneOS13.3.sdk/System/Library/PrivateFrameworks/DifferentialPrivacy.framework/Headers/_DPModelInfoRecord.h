/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSManagedObjectID;

@interface _DPModelInfoRecord : NSObject

{
    _Bool _submitted;
    short _majorVersion;
    short _minorVersion;
    double _creationDate;
    NSManagedObjectID *_objectId;
}

@property (nonatomic) short majorVersion;
@property (nonatomic) short minorVersion;
@property (nonatomic) double creationDate;
@property (nonatomic) _Bool submitted;
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
- (_Bool)copyFromManagedObject:(id)arg1;
- (id)initWithMajorVersion:(short)arg1 minorVersion:(short)arg2 creationDate:(double)arg3 objectId:(id)arg4;
- (_Bool)isEqualToModelInfo:(id)arg1;

@end
