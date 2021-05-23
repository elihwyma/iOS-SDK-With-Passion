/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSManagedObjectID, NSString;

@interface _DPPrivacyBudgetRecord : NSObject

{
    _Bool _submitted;
    NSString *_key;
    double _creationDate;
    double _lastUpdate;
    long long _balance;
    NSManagedObjectID *_objectId;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) double creationDate;
@property (nonatomic) double lastUpdate;
@property (nonatomic) long long balance;
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
- (id)initWithKey:(id)arg1 creationDate:(double)arg2 lastUpdate:(double)arg3 balance:(long long)arg4 objectId:(id)arg5;
- (_Bool)isEqualToPrivacyBudgetRecord:(id)arg1;

@end
