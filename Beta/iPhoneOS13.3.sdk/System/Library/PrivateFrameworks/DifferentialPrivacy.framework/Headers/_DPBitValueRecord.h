/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSManagedObjectID, NSString;

@interface _DPBitValueRecord : NSObject

{
    _Bool _submitted;
    short _clearBitValue;
    NSString *_key;
    NSString *_privateBitValueStr;
    double _creationDate;
    long long _reportVersion;
    NSManagedObjectID *_objectId;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) short clearBitValue;
@property (copy, nonatomic) NSString *privateBitValueStr;
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
- (id)initWithKey:(id)arg1 clearBitValue:(short)arg2 privateBitValueStr:(id)arg3 creationDate:(double)arg4 submitted:(_Bool)arg5 objectId:(id)arg6;
- (_Bool)isEqualToBitValueRecord:(id)arg1;

@end
