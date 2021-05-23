/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKObject.h>

@class NSString, _DKCategoryType;

@interface _DKCategory : _DKObject

{
    long long _integerValue;
    _DKCategoryType *_categoryType;
}

@property long long integerValue;
@property (retain) _DKCategoryType *categoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)fromPBCodable:(id)arg1;
+ (id)categoryWithInteger:(long long)arg1 type:(id)arg2;
+ (id)entityName;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;
+ (id)_categoryFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;

- (double)doubleValue;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringValue;
- (long long)compareValue:(id)arg1;
- (id)primaryValue;
- (id)objectType;
- (id)toPBCodable;
- (long long)typeCode;
- (id)initWithInteger:(long long)arg1 type:(id)arg2 cache:(id)arg3;
- (_Bool)copyToManagedObject:(id)arg1;

@end
