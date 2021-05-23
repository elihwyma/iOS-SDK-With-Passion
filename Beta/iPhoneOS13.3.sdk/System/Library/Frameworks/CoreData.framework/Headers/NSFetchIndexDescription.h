/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

#import <CoreData/Swift-Protocol.h>

@class NSArray, NSEntityDescription, NSPredicate, NSString;

@interface NSFetchIndexDescription : NSObject <Swift>

{
    NSString *_name;
    NSArray *_elements;
    NSEntityDescription *_entity;
    NSPredicate *_partialIndexPredicate;
}

@property (copy) NSString *name;
@property (copy) NSArray *elements;
@property (nonatomic, readonly) NSEntityDescription *entity;
@property (copy) NSPredicate *partialIndexPredicate;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)_compare:(id)arg1;
- (_Bool)_isEditable;
- (_Bool)_expressionIsCompoundIndexCompatible:(id)arg1;
- (void)_throwIfNotEditable;
- (id)initWithName:(id)arg1 elements:(id)arg2;
- (void)_setEntity:(id)arg1;
- (_Bool)_isMappedSinglePropertyIndex;
- (void)_setIsUnique:(_Bool)arg1;
- (id)_compoundIndexRepresentation;
- (_Bool)_isIndexForProperty:(id)arg1;
- (id)initWithName:(id)arg1 predicate:(id)arg2 elements:(id)arg3 entity:(id)arg4;
- (void)_checkElements:(id)arg1;
- (_Bool)_isBinary;
- (_Bool)_isCompoundIndexCompatible;
- (_Bool)_isUnique;
- (void)_validateCollationTypeChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (_Bool)_isPurelyModeledIndex;

@end
