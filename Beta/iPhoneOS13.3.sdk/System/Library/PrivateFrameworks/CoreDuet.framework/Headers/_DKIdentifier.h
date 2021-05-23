/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKObject.h>

@class NSString, _DKIdentifierType;

@interface _DKIdentifier : _DKObject

{
    NSString *_stringValue;
    _DKIdentifierType *_identifierType;
}

@property (retain) NSString *stringValue;
@property (retain) _DKIdentifierType *identifierType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)identifierWithString:(id)arg1 type:(id)arg2;
+ (id)fromPBCodable:(id)arg1;
+ (id)entityName;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;
+ (id)_identifierFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;

- (double)doubleValue;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)integerValue;
- (id)initWithString:(id)arg1 type:(id)arg2;
- (long long)compareValue:(id)arg1;
- (id)primaryValue;
- (id)objectType;
- (id)toPBCodable;
- (long long)typeCode;
- (_Bool)copyToManagedObject:(id)arg1;

@end
