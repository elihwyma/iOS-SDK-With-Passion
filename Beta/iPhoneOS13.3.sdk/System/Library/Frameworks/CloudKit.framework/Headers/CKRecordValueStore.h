/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecord, NSMutableDictionary, NSMutableSet, NSString;

@interface CKRecordValueStore : NSObject

{
    _Bool _trackChanges;
    NSMutableDictionary *_values;
    NSMutableDictionary *_originalValues;
    NSMutableSet *_changedKeysSet;
    CKRecord *_record;
}

@property (nonatomic) _Bool trackChanges;
@property (weak, nonatomic) CKRecord *record;
@property (retain, nonatomic) NSMutableDictionary *values;
@property (retain, nonatomic) NSMutableDictionary *originalValues;
@property (retain, nonatomic) NSMutableSet *changedKeysSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allKeys;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (id)recordID;
- (void)_validateRecordKey:(id)arg1;
- (void)_validateKeyUniquenessForKey:(id)arg1;
- (void)_validateRecordValue:(id)arg1;
- (void)setObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)_sanitizeRecordValue:(id)arg1;
- (_Bool)checkPropertiesWithModifiedPropertiesOnly:(_Bool)arg1 includingAllArrayItems:(_Bool)arg2 withValueCheckBlock:(CDUnknownBlockType)arg3;
- (id)changedKeys;
- (id)initWithRecord:(id)arg1;
- (void)resetChangedKeys;
- (_Bool)checkProperties:(_Bool)arg1 withValueCheckBlock:(CDUnknownBlockType)arg2;

@end
